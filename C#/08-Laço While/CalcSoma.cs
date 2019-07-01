using System;

class CalcSoma
{
    static void Main(string[] args)
    {
//Faremos uma calculadora que soma valores depois de perguntar ao usuario
//quantas operções ele deseja fazer
        int x;
        int y;
        int soma;
        int op;
        int cont = 1;
        string userValue;

        Console.WriteLine("Calculadora de soma"); 
        Console.WriteLine("Quantas operações deseja fazer?");
        userValue = Console.ReadLine();
        op = Convert.ToInt32(userValue);

        while(cont <= op)
        {
            Console.WriteLine("Digite um valor:");
            userValue = Console.ReadLine();
            x = Convert.ToInt32(userValue);

            Console.WriteLine("Digite outro valor");
            userValue = Console.ReadLine();
            y = Convert.ToInt32(userValue);

            soma = x + y;
            Console.WriteLine(x +" + " +y +" = " +soma +"\n");
            cont++;
        }
        Console.ReadLine();      
    }
}