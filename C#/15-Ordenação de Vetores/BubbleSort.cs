using System;

class BubbleSort
{
    //Método bubble sort para ordenação de vetores
    public static int[] bubbleSort(int[] vetor) 
    {
        int tamanho = vetor.Length;
        int comparacao = 0;
        int trocas = 0;

        for (int i = tamanho - 1; i >= 1; i--) 
        {
            for (int j = 0; j < i; j++) 
            {
                comparacao++;
                if (vetor[j] > vetor[j + 1]) 
                {
                    int aux = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = aux;
                    trocas++;
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

        Console.WriteLine("Pós bubble sort");

        //Vamos invocar o método passando vetor numeros como argumento
        bubbleSort(numeros);
        //Exibindo vetor ordenado
        foreach (int numero in numeros)
        {
            Console.WriteLine(numero);
        }

        Console.ReadLine();
    }
}