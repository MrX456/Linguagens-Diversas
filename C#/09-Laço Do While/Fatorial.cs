using System;

    class Fatorial
    {
        static void Main(string[] args)
        {
            //Agora vamos implementar um algoritmo para calculo de fatorial usando Do While
            long c, n, f;
            string resp;
    //Este primeiro controla o numero de operações
            do
            {
                Console.WriteLine("Digite um número :");
                n = long.Parse(Console.ReadLine());
                c = n;
                f = 1;
                do
                {
                    Console.Write(c +" X ");
                    f = f * c;
                    c = c - 1;
                } while(c >= 1);

                Console.WriteLine("\nO fatorial de " +n +" é " +f);
                Console.WriteLine("Deseja fazer outra operação? s/n");
                resp = Console.ReadLine();
            } while(resp != "n");
        }
    }