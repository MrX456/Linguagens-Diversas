using System;

class Metodo3
{
    //Vamos criar um método que inverte a ordem de uma string precisamos passar a string
    //a ser invertida como parâmetro
    //Como o método possui VOID ele não pode retornar o resultado então 
    //precisamos usar um ConsoleWrite dentro do próprio método para ver a inversão feita.
    private static void inverteString(string entrada) 
    {
        char[] entradaArray = entrada.ToCharArray();
        Array.Reverse(entradaArray);
        foreach (char item in entradaArray) 
        {
            Console.Write(item);
        }
        Console.Write(" "); //Para separar palavras
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

        //Depois de pegar os dados chamamos método inverte e passamos os dados como
        //parametro,um por método, sem parâmetros o método não pode ser chamado.
        inverteString(sobrenome);
        inverteString(nome);

        Console.ReadLine();



       
    }
}