using System;

class Quebracont
{
    static void Main(string[] args)
    {
     //Vamos interromper e quebrar o laço de uma contagem quando ela 
     //atingir um certo valor menor do que a condição testada

        for(int i = 0; i <= 10; i++)
        {
            Console.WriteLine(i);

            if(i == 7)
            {
                Console.WriteLine("Você chegou ao valor 7. Contagem abortada!");
                //Este break quebra qualquer laço
                break;
            }
        }
        Console.ReadLine();
    }
}