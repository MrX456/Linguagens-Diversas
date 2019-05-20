using System;

class Concatenacao
{
    static void Main(string[] args)
    {
// Para fazer concatenação usamos o operador +
        string nome = "Maria";
        int idade = 21;
        double altura = 1.72;

//Vamos exibir as tres variaveis em um Console.WriteLine usando a concatenação  
        Console.WriteLine(nome +" tem " +idade +" anos e " +altura +" m de altura.");
        Console.ReadLine();
    }
}