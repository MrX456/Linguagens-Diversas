using System;

class SelectionSort
{
    //Método selection sort para ordenação de vetores
    public static int[] selectionSort(int[] vetor) 
    {
        int min;
        int aux;

        for (int i = 0; i < vetor.Length - 1; i++) 
        {
            min = i;

            for (int j = i; j < vetor.Length; j++) 
            {
                if (vetor[j] < vetor[min]) 
                {
                    min = j;
                }

                if (min != i)
                {
                    aux = vetor[min];
                    vetor[min] = vetor[i];
                    vetor[i] = aux;
                }
            }
        }

        return vetor;
    }
    static void Main(string[] args)
    {
        int[] numeros = new int[] { 2, 5, 1, 3, 4 };
        Console.WriteLine("Vetor original:");
        foreach (int numero in numeros)
        {
            Console.WriteLine(numero);
        }

        Console.WriteLine("Pós selection sort");

        //Vamos invocar o método passando vetor numeros como argumento
        selectionSort(numeros);
        //Exibindo vetor ordenado
        foreach (int numero in numeros)
        {
            Console.WriteLine(numero);
        }

        Console.ReadLine();
    }
}