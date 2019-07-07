using System;

class Preenchematriz
{
    static void Main(string[] args)
    {
  //Vamos receber dados do usuario para preencher uma matriz 3x3

        string[,] matriz = new string[3,3];
  //Vamos preencher

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                Console.WriteLine("Digite valor para preencher matriz 3x3");
                matriz[i,j] = Console.ReadLine();
            }
        }
        
   //Vamos exibir matriz preenchida
        string aux = "";

        for(int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                aux += matriz[i, j] +" ";
            }
            aux += "\n";
        }
        Console.WriteLine(aux);

        Console.ReadLine();
    }
}