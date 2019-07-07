using System;

class Matriztipo2
{
    static void Main(string[] args)
    {
  //Tambem podemos inicializar uma matriz assim
        int[,] matriz  = {{0,1}, {1,0}};  //Matriz 2x2 

   //Vamos exibir matriz
        string aux = "";

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                aux += matriz[i,j] +" ";
            }
            aux += "\n";
        }
        Console.WriteLine(aux);  

        Console.ReadLine();      
    }

}