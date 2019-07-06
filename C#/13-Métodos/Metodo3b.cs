using System;

class Metodo3b
{
   //Agora vamos trocar o void pelo tipo de retorno esperado(string), então não precisaremos
   //mais do consolewrite porque este método podera retornar seu resultado para o método principal.
    public static string inverteString(string entrada)
    {
        char[] entradaArray = entrada.ToCharArray();
        Array.Reverse(entradaArray);
        //Agora basta pedir que retorne seu resultado. Vamos usar uma função especial ja que é um array
        //passando o entradaArray como parâmetro
        return String.Concat(entradaArray);
    }

    //Vamos criar um método para mostrar o resultado
    //Vamos precisar passar parâmetros
    private static void mostraResultado(string snome, string nome) 
    {
    //Vamos usar uma função parcecida com console write
        Console.Write(String.Format("{0} {1}", snome, nome));
    }

    //Método principal
    static void Main(string[] args)
    {
        string nome;
        Console.WriteLine("Digite seu nome");
        nome = Console.ReadLine();

        string sobrenome;
        Console.WriteLine("Digite seu sobrenome");
        sobrenome = Console.ReadLine();

        //Agora como o método gera um retorno vamos passa-lo para uma variavel
        //para poder exibir melhor para o usuario
        string sobrenomeInvertido = inverteString(sobrenome);
        string nomeInvertido = inverteString(nome);
        //Agora só chamar método e passar parâmetros para mostrar ao usuario
        mostraResultado(sobrenomeInvertido, nomeInvertido);
        

        Console.ReadLine();




    }
}