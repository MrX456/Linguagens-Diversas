using System;

class CalcSub
{
    static void Main(string[] args)
    {
        //Vamos fazer uma calculadora que subtrai valores digitados pelo usuario
        int a;
        int b;
        int subtracao;
        string userValue; //Necessario para armazenar dados digitados pelo usuario

        Console.WriteLine("Calculadora de Subtração");
        Console.WriteLine("----------------------");
        Console.WriteLine("Digite um valor : ");
        userValue = Console.ReadLine();
        //Todo dado digitado é tratado como uma string, como queremos 
        //um numero inteiro temos que converter  esta string para um inteiro:
        a = Convert.ToInt32(userValue);

        Console.WriteLine("Digite outro valor : ");
        userValue = Console.ReadLine();
        b = Convert.ToInt32(userValue);
        subtracao = a - b;

        Console.WriteLine("A subtracao de " + a + " - " + b + " = " + subtracao);
        Console.ReadLine();

    }
}