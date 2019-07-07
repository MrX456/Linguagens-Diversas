using System;

class ShellSort
{
    //Método shell sort para ordenação de vetores
    public static int[] shellSort(int[] vetor)
    {
        int h = 1;
        int n = vetor.Length;

        while(h < n)
        {
            h = h * 3 + 1;
        }

        h = h / 3;
        int c;
        int j;

        while(h > 0)
        {
            for (int i = h; i < n; i++) 
            {
                c = vetor[i];
                j = i;
                while (j >= h && vetor[j - h] > c) 
                {
                    vetor[j] = vetor[j - h];
                    j = j - h;
                }

                vetor[j] = c;
            }

            h = h / 2;
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

        Console.WriteLine("Pós shell sort");

        //Vamos invocar o método passando vetor numeros como argumento
        shellSort(numeros);
        //Exibindo vetor ordenado
        foreach (int numero in numeros)
        {
            Console.WriteLine(numero);
        }

        Console.ReadLine();
    }
}