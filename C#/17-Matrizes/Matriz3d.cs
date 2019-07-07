using System;

class Matriz3d
{
    static void Main(string[] args)
    {
        //Vamos declarar uma matriz tridimensional
        int[, ,] matriz3d = new int[,,] { { { 1, 2, 4 }, { 2, 3, 5 } }, { { 4, 7, 8 }, { 6, 8, 9 } } };
        //Para exibir um elemento da matriz Console.WriteLine(matriz[indice a, indice b, indice c])
        //Para todos elementos:
        for (int i = 0; i < matriz3d.GetLength(2); i++) 
        {
            for (int j = 0; j < matriz3d.GetLength(1); j++) 
            {
                for (int k = 0; k < matriz3d.GetLength(0); k++)
                {
                    Console.Write(matriz3d[k,j,i] +" ");
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }
        Console.ReadLine();
    }
}