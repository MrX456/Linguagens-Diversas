using System;

    class DoWhile
    {
        static void Main(string[] args)
        {
    //Aqui vamos usar o do while. A condição só e testada depois de executar o bloco pela primeira vez
    //e vai executando até quando falsa o laço é quebrado
        int x, y, soma;
        string resp;
        do
            {
                Console.WriteLine("Calculadora de soma");
                Console.WriteLine("Digite o primeiro valor :");
                x = int.Parse(Console.ReadLine());

                Console.WriteLine("Digite o segundo valor :");
                y = int.Parse(Console.ReadLine());//Converte entrada para int
                soma = x + y;

                Console.WriteLine(x + " + " + y + " = " + soma);
                Console.WriteLine("Deseja fazer outra operação? s/n");
                resp = Console.ReadLine();
            } while (resp != "n");//Enquanto resp for diferente de "n" laço executara.
        }
    }