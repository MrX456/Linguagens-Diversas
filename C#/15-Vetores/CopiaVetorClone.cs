using System;

class Programa
{
    static void Main(string[] args)
    {
    //Também podemos copiar um vetor fazendo um clone dele
        int[] numeros = {7, 2, 1, 3, 6 };
        //Clonando vetor
        int[] copia = (int[])numeros.Clone();

        //Mostrando os vetores
        Console.WriteLine("Vetor original");
        for (int i = 0; i < numeros.Length; i++)
        {
            Console.Write(" " + numeros[i]);
        }

        //Vetor clone
        Console.WriteLine("\nVetor clone");
        for (int i = 0; i < copia.Length; i++)
        {
            Console.Write(" " + copia[i]);
        }
        Console.ReadLine();
    }
}