using System;

class Vetortipo2
{
    static void Main(string[] args)
    {
//Podemos tambem atribuir valores para um vetor individualmente dessa forma
//lembrando que todo vetor começa com indice 0.

        string[] nomes = new string[3]; //Vetor com 3 indices
        nomes[0] = "Paula";
        nomes[1] = "Ana";
        nomes[2] = "Carla";

  //Agora vamos exibir este vetor
        for(int i = 0; i < nomes.Length; i++)
        {
            Console.WriteLine(nomes[i]);
        }
        Console.ReadLine();          
    }
}