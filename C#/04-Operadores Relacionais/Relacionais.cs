using System;

class Relacional
{
    static void Main(string[] args)
    {
    //Os operadores relacionais em C# são:
    // > maior < menor >= maior ou igual =< menor ou igual 
    // == igual != diferente    

        int a = 1;
        int b = 3;
        int c = 1;
        bool teste;//Vai mostrar relação testada

    //Vamos testar a relação entre estas variaveis
        Console.WriteLine("Dadas variaveis " +a +" " +b +" " +c); 
        Console.WriteLine("------------------------------------------------------");
        teste = a > b;
        Console.WriteLine(a +" maior que > " +b +" = " +teste);//Falso
        teste = a < b;
        Console.WriteLine(a +" menor que < " +b +" = " +teste);//Verdadeiro
        teste = a <= c;
        Console.WriteLine(a +" menor ou igual <= " +c +" = " +teste);//Verdadeiro
        teste = a >= b;
        Console.WriteLine(a +" maior ou igual >= " +b +" = " +teste);//Falso
        teste = a == b;
        Console.WriteLine(a +" igual == " +b +" = " +teste);//Falso
        teste = a != b;
        Console.WriteLine(a +" diferente != " +b +" = " +teste);//Verdadeiro
        Console.ReadLine();
       

    }
}