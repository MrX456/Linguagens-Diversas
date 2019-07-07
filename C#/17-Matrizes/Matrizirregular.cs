using System;

class Matrizirregular
{
    static void Main(string[] args)
    {
        //Podemos declarar uma matriz com quantidade de colunas variavel
        //porem temos que declarar o número de linhas   
        //tipo[][] nome = new tipo[linhas][];
        int[][] matriz = new int[3][];
        //Agora vamos inicializar
        matriz[0] = new int[] { 1, 2, 3, 5 };   //linha 1
        matriz[1] = new int[] { 1, 2, 3, 5, 9, 11, 13 };   //linha 2
        matriz[2] = new int[] { 1 };  //linha 3

        //Para exibir este tipo de matriz usamos:
        string aux = "";

        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < matriz[i].Length; j++) 
            {
                aux += matriz[i][j] + " ";
            }
            aux += "\n";
        }
        Console.WriteLine(aux);

        Console.ReadLine();
    }
}