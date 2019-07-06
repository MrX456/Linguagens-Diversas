using System;

class Invertechar
{
    static void Main(string[] args)
    {
//Vamos inverter uma string
        string a = "Vamos inverter esta cadeia de caracteres";

    //Vamos armazenar string em um vetor
        char[] vetorChar = a.ToCharArray();
    //Vamos fazer inversão
        Array.Reverse(vetorChar);

    //Vamos mostrar o vetor
        foreach (char charA in vetorChar)
        {
            Console.Write(charA);
        }        
        Console.ReadLine();
    }
}