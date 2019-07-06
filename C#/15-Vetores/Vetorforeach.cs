using System;

class Vetorforeach
{
    static void Main(string[] args)
    {
//vamos declarar um vetor
        string[] carros = new string[] {"Skyline", "Supra", "Murciélago", "F40", "CCX", "Charger"};
        int[] numeros = new int[] {1, 3, 5, 7, 9};
 
//Podemos exibir todos estes elementos também através de um laço foreach
//Primeiro vem o tipo de dado, depois uma nova variavel criada, depois IN e por ultimo o nome do vetor
        Console.WriteLine("Vetor Carros");
        foreach(string carro in carros)  
        {
            Console.WriteLine(carro);
        }

        Console.WriteLine("Vetor Numeros");
        foreach(int numero in numeros)
        {
            Console.WriteLine(numero);
        } 
        Console.ReadLine();     
    }
}