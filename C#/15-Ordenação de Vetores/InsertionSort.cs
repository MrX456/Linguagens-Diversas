using System;


class InsertionSort
    {
        //Método Insertion sort para ordenar vetor
        static int[] insertionSort(int[] vetor)
        {
            int i, j, atual;
            for (i = 1; i < vetor.Length; i++)
            {
                atual = vetor[i];
                j = i;
                while ((j > 0) && (vetor[j - 1] > atual))
                {
                    vetor[j] = vetor[j - 1];
                    j = j - 1;
                }
                vetor[j] = atual;
            }
            return vetor;
        }

        //Método principal
        static void Main(string[] args)
        {
            int[] numeros = new int[] { 2, 4, 1, 3, 5 };
            Console.WriteLine("Vetor original:");
            foreach (int numero in numeros)
            {
                Console.WriteLine(numero);
            }

            Console.WriteLine("Pós insertion sort");
    
            //Vamos invocar o método passando vetor numeros como argumento
            insertionSort(numeros);
            //Exibindo vetor ordenado
            foreach (int numero in numeros)
            {
                Console.WriteLine(numero);
            }

            Console.ReadLine();
        }
}