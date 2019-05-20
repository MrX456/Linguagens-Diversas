using System;

class Precedencia 
{
    static void Main(string[] args)
    {
//A ordem de precedencia dos operadores em C# é:
//1-Expressões entre parenteses()
//2-Multiplicação e Divisão
//3-Soma e Subtração 

//Vamos calcular uma media de 2 valores
        int x = 9;
        int y = 10;
//Sem o uso dos parenteses primeiro seria resolvida a divisão y/2 invalidando a média        
        double media = (x + y) / 2d; //Queremos o resultado do tipo double(mesmo que seja divisão sem resto)
        Console.WriteLine("A média entre " +x +" e " +y +" é " +media);
        Console.ReadLine();
    }
}