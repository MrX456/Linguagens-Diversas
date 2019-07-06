using System;

class Vetorentrada
{
    static void Main(string[] args)
    {
        //Vamos receber alguns valores do usuario e armazena-los em um vetor
        string[] cor = new string[4];

        for (int i = 0; i < cor.Length; i++)
        {
            Console.WriteLine("Digite uma cor favorita.");
            cor[i] = Console.ReadLine();
        }
        Console.WriteLine("Suas cores escolhidas foram:");
        //Vamos mostrar nosso vetor
        for (int i = 0; i < cor.Length; i++)
        {
            Console.Write(cor[i] + "  ");
        }
        Console.ReadLine();
    }
}