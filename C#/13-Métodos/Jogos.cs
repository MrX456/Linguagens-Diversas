using System;

class Jogos
{
    //Vamos criar um pequeno menu usando o laço while para iteração
    //Vamos criar alguns métodos
    //Este precisa retornar um boolean
    private static bool mainMenu()
    {
        Console.Clear();//Limpa a tela do console
        Console.WriteLine("Escolha 1 opção");
        Console.WriteLine("1) Imprime Números");
        Console.WriteLine("2) Adivinhe o Número");
        Console.WriteLine("3) Sair");

        string escolha = Console.ReadLine();

        switch (escolha)
        {
            case "1":
                imprimeNumeros();
                return true;


            case "2":
                adivinhacao();
                return true;


            case "3":
                return false; //vai retornar um boolean false que vai quebrar o while e fechar programa


            default:
                return true;

        }
    }

    //Esta função será um contador
    private static void imprimeNumeros()
    {
        Console.Clear();//Limpa a tela do console
        Console.WriteLine("Imprime Números");
        Console.WriteLine("Digite um número: ");
        int num = int.Parse(Console.ReadLine());//Vamos converter para inteiro
        int contador = 1;
        while(contador <= num)
        {
            Console.Write(contador);
            Console.Write(" - ");
            contador++;
        }
        Console.WriteLine(" ");
        Console.ReadLine();
    }

    //Método no qual usuario deve adivinhar numero sorteado pelo programa
    private static void adivinhacao()
    {
        Console.Clear();//Limpa a tela do console
        Console.WriteLine("Jogo da adivinhação");

        //Vamos chamar instanciar um objeto de random para gerar numero aleatório
        Random valor = new Random();
        int numero = valor.Next(1, 11); //Como argumento passamos o valor minimo e o maximo

        int palpites = 0;
        bool incorreto = true;

        //Usando do while teremos que executar este bloco pelo menos uma vez
        do
        {
            Console.WriteLine("Adivinhe o numero sorteado de 0 a 10");
            string resultado = Console.ReadLine();
            palpites++; //Cada vez que laço for executado significa que usuario deu um palpite novo

            if (resultado == numero.ToString()) //Vamos converter valor random para string e comparar com numero digitado
            {
                incorreto = false;
            }
            else
            {
                Console.WriteLine("Resposta errada!");
            }
        } while (incorreto);
            Console.WriteLine("Correto! Você usou " +palpites +" palpites.");
            Console.ReadLine();
    }

    static void Main(string[] args)
    {
        //Vamos criar uma variavel do tipo boolean
        bool mostraMenu = true;

        //Enquanto esta variavel for verdadeira o menu continuara a ser mostrado denovo(não precisa de true).
        while (mostraMenu)
        {
            //vamos chamar método mainmenu
            mostraMenu = mainMenu();//metodo retornara boolean. Vai retornar false se usuario digitar 4 fechando o programa
        }
        Console.ReadLine();
    }
}