using System;

class Contador
{
    static void Main(string[] args)
    {
//Podemos fazer repetições em C# através do laço while
//Vamos fazer um contador de 0 a 10
        int cont = 0;
//Enquanto variavel cont for menor ou igual a 10, cont recebe 1
        while(cont <= 10)
        {
            Console.WriteLine(cont +" ");
            cont++;
        }  
        Console.ReadLine();      
    }
}