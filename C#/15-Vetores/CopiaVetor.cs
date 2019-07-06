using System;

class CopiaVetores
{
    static void Main(string[] args)
    {
//Podemos copiar dados de um vetor para outro
        int[] numeros = {1, 5, 2, 8, 4 };
        //Vamos copiar os dados do vetor acima para este
        int[] copia = new int[numeros.Length];
        //Fazendo a cópia de cada valor
        for(int i = 0; i < numeros.Length; i++)
        {
            copia[i] = numeros[i];
        }
        //Mostrando os vetores
        Console.WriteLine("Vetor original");
        for (int i = 0; i < numeros.Length; i++) 
        {
            Console.Write(" " +numeros[i]);
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