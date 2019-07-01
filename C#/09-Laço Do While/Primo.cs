using System;

    class Program
    {
        static void Main(string[] args)
        {
    //Vamos criar um algoritmo que verifica se um numero é primo usando do while
            int c, n, numDiv;

            c = 1; //Divisor
            numDiv = 0 ; //Numeros que podem dividir o numero passado deixando resto 0

            Console.WriteLine("Digite um numero para verificar se é primo: ");
            n = int.Parse(Console.ReadLine());
            do
            {
                c++;
                if(n % c == 0)
                {
                    numDiv++; //Variavel que conta divisores de resto 0
                }
            } while(c < n);

            if(numDiv > 2)
            {
                Console.WriteLine("O número " +n +" não é primo.");
            }
            else
            {
                Console.WriteLine("O número " +n +" é primo.");
            }
            Console.ReadLine();
        }
    }

