using System;

class Metodo2
{
    //Vamos criar 2 métodos: Um que soma valores e outro que subtrai

    //Método de soma precisa de dois parametros(nesse caso inteiros)para fazer soma
    //e vai retornar esta soma como um inteiro portanto não pode ser VOID
    public static int soma(int x, int y)
    {
        int z = x + y;
        return z;
    }

    //Método de subtração tambem precisa de parâmetros e vai gerar retorno do tipo int
    public static int subtracao(int x, int y) 
    {
        int z = x - y;
        return z;
    }
    //As variaveis criadas nos métodos acima possuem escopo local, ou seja, não podem
    //ser chamadas FORA do bloco de seus respectivos métodos

    //Método principal
    static void Main(string[] args)
    {
        //Dadas duas variaveis
        int a = 4;
        int b = 6;

        //Chamamos soma com estas variaveis como parametro
        Console.WriteLine("Chamando método Soma");
        Console.WriteLine(soma(a, b));


        //Chamamos subtracao com estas variaveis como parametro
        Console.WriteLine("Chamando método Subtração");
        Console.WriteLine(subtracao(a, b));

        //Vamos inverter os parametros passando primeiro b(vai pra x) depois a(vai pra y)
        Console.WriteLine("Chamando método Subtração invertendo ordem dos parâmetros");
        Console.WriteLine(subtracao(b, a));
        Console.ReadLine();
    }
}