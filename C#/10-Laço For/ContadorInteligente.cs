using System;

class Contador_inteligente
{
    static void Main(string[] args)
    {
    //O contador vai incrmentar se o segundo valor for menor que o primeiro
    //e vai decrementar caso contrario

        int i;
        int j;
        string userInput;

        Console.WriteLine("Contador Inteligente");
        Console.WriteLine("----------------------");
        Console.WriteLine("Digite um valor:");
        userInput = Console.ReadLine();
        i = Convert.ToInt32(userInput);

        Console.WriteLine("Digite outro valor:");
        userInput = Console.ReadLine();
        j = Convert.ToInt32(userInput);

        if(i < j)
        {
            for(int c = i; c <= j; c++)
            {
                Console.WriteLine(c);
            }
        }
        else if(i > j)
        {
            for(int c = i; c >= j; c--)
            {
                Console.WriteLine(c);
            }
        }
        Console.ReadLine();    
    }
}