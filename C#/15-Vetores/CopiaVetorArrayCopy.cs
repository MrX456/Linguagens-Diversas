using System;

class Programa
{
    static void Main(string[] args)
    {
    //Tambem podemos copiar vetores atarvés da classe Array método Copy
        int[] numeros = {3, 4, 1, 7, 2};
        int[] copia = new int[numeros.Length];

        //Classe array: Array origem, Array destino, tamanho do array
        Array.Copy(numeros, copia, copia.Length);

        //Mostrando os vetores
        Console.WriteLine("Vetor original");
        for (int i = 0; i < numeros.Length; i++)
        {
            Console.Write(" " + numeros[i]);
        }

        //Vetor copia
        Console.WriteLine("\nVetor cópia");
        for (int i = 0; i < copia.Length; i++)
        {
            Console.Write(" " + copia[i]);
        }
        Console.ReadLine();
    }
}