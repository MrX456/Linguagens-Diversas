using System;




class Excecao
{
    //Todos os dados de entrada em C# são considerados como string. Para fazer programas
    //que utilizem operações aritméticas devemos converter estes dados para o tipo numérico desejado,
    //porém se o usuario digitar uma letra irá gerar uma excecao. Para evitar podemos trata-la
    //com try catch

    public static int soma(int a, int b)
    {
        int s = a + b;
        return s;
    }

    private static int subtracao(int x, int y)
    {
        int z = x - y;
        return z;
    }
    static void Main(string[] args)
    {
        int x;
        int y;
        int op;
        int cont = 1;
        string escolha;

        //O tipo de excecao gerada é FormatException
        try
        {
            Console.WriteLine("Calculadora");
            Console.WriteLine("Quantas operações deseja fazer");
            op = int.Parse(Console.ReadLine());

            while (cont <= op)
            {

                Console.WriteLine("Digite o primeiro número");
                x = int.Parse(Console.ReadLine());

                Console.WriteLine("Digite o segundo número");
                y = int.Parse(Console.ReadLine());

                Console.WriteLine("Digite 1 para soma");
                Console.WriteLine("Digite 2 para subtração");
                escolha = Console.ReadLine();

                switch (escolha)
                {
                    case "1":
                        Console.WriteLine(soma(x, y));
                        break;

                    case "2":
                        Console.WriteLine(subtracao(x, y));
                        break;

                    default:
                        Console.WriteLine("Operação inválida");
                        break;
                }

                cont++;
            }
        }

        catch (FormatException)
        {
            Console.WriteLine("Por favor digite apenas números");
        }

        //Mesmo sem excecao este bloco será executado
        finally 
        {
            Console.WriteLine("Finalizando...");
            Console.ReadLine();
        }
    }
}

