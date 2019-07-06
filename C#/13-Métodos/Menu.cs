using System;

class Menu
{
    //Vamos criar um pequeno menu usando o laço while para iteração
    //Vamos criar alguns métodos
    //Este precisa retornar um boolean
    private static bool mainMenu()
    {
        Console.WriteLine("Escolha 1 opção");
        Console.WriteLine("1) Jogar");
        Console.WriteLine("2) Multiplayer");
        Console.WriteLine("3) Opções");
        Console.WriteLine("4) Sair");

        string escolha = Console.ReadLine();

        switch (escolha)
        {
            case "1":
                jogar();
                return true;
                

            case "2":
                multiplayer();
                return true;
             

            case "3":
                option();
                return true;
                

            case "4":
                return false; //vai retornar um boolean false que vai quebrar o while e fechar programa
                

            default:
                return true;
               
        }
    }

    private static void jogar()
    {
        Console.WriteLine("Player: 2100 pts\n");
    }

    private static void multiplayer()
    {
        Console.WriteLine("Player 1: 1900 pts");
        Console.WriteLine("Player 2: 2300 pts");
        Console.WriteLine("Player 2 Wins!\n");
    }

    private static void option()
    {
        Console.WriteLine("Dificuldade: Normal");
        Console.WriteLine("Brilho: ||||||||||");
        Console.WriteLine("Som : Mono\n");

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