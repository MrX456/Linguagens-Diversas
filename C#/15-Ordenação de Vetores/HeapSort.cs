using System;


    class HeapSort
    {
        //Método heap sort para ordenação de vetores
        public static int[] heapSort(int[] vetor) 
        {
            buildMaxHeap(vetor);
            int n = vetor.Length;

            for(int i = vetor.Length - 1; i > 0; i--)
            {
                swap(vetor, i, 0);
                maxHeapify(vetor, 0, --n);
            }
            return vetor;
        }

        //Métodos adicionais
        private static void buildMaxHeap(int[] v) 
        {
            for (int i = v.Length / 2 - 1; i >= 0; i--) 
            {
                maxHeapify(v, i, v.Length);
            }
        }

        private static void maxHeapify(int[] v, int pos, int n) 
        {
            int max = 2 * pos + 1, right = max + 1;
            if(max < n)
            {
                if (right < n && v[max] < v[right]) 
                {
                    max = right;
                }
                if (v[max] > v[pos])
                {
                    swap(v, max, pos);
                    maxHeapify(v, max, n);
                }
            }
        }

        private static void swap(int[] v, int j, int aposJ) 
        {
            int aux = v[j];
            v[j] = v[aposJ];
            v[aposJ] = aux;
        }
        static void Main(string[] args)
        {

            int[] numeros = new int[] { 2, 5, 1, 3, 4 };
            Console.WriteLine("Vetor original:");
            foreach (int numero in numeros)
            {
                Console.WriteLine(numero);
            }

            Console.WriteLine("Pós heap sort");

            //Vamos invocar o método passando vetor numeros como argumento
            heapSort(numeros);
            //Exibindo vetor ordenado
            foreach (int numero in numeros)
            {
                Console.WriteLine(numero);
            }

            Console.ReadLine();
        }
    }

