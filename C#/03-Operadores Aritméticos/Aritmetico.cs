using System;

class Aritmeticos
{
    static void Main(string[] args)
    {
        int x = 2;
        int y = 4;
    //Os operadores aritméticos em C# são:
        int soma = x + y;
        int subtracao = x - y;
        int multiplicacao = x * y;
        double divisao = y / x;
        int restoDiv = y % x;
        int pre_incremento = ++x; //Incrementação feita antes de exibir variavel
        int pos_incremento = y++; //Valor só sera incrementado na segunda chamada da variavel
        int pre_decremento = --x; //Decrementação feita antes de exibir variavel
        int pos_decremento = y--; //Valor só sera decrementado na segunda chamada da variavel


        Console.WriteLine(soma);
        Console.WriteLine(subtracao);
        Console.WriteLine(multiplicacao);
        Console.WriteLine(divisao);
        Console.WriteLine(restoDiv);
        Console.WriteLine(pre_incremento); //Variavel ja teve acrecentado uma unidade em seu valor(X=3)
        Console.WriteLine(pos_incremento); //Variavel ainda esta com o mesmo valor mas na proxima chamada sera incrementada(Y=4 + 1)
        Console.WriteLine(pre_decremento); //Variavel ja teve diminuido uma unidade em seu valor(X=2)
        Console.WriteLine(pos_decremento); //Variavel ainda esta com o mesmo valor mas na proxima chamada sera decrementada(Y=5)
        Console.ReadLine();
    }
}