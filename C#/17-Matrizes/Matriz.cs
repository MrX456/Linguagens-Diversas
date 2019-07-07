using System;

class Matriz
{
    static void Main(string[] args)
    {
//Vamos usar variaveis compostas multidimensionais (matrizes)
//Para declarar estas variaveis usamos [,] para indicar 2 parâmetros:
        //tipo[,] nome = new tipo [linhas,colunas];

        int[,] matriz = new int[3, 3]; //matriz 3x3  

  //Vamos distribuir os valores em cada linha e coluna, lembrando que inidice começa no 0
        matriz[0,0] = 1;
        matriz[0,1] = 2;
        matriz[0,2] = 3;
        matriz[1,0] = 4;
        matriz[1,1] = 5;
        matriz[1,2] = 6;
        matriz[2,0] = 7;
        matriz[2,1] = 8;
        matriz[2,2] = 9;  

   //Para exibir a matriz precisamos de um laço tambem, como temos 2 dimensões
   //pecisamos de 2 for e uma variavel auxiliar
        string aux = ""; //Vai armazenar indices[i][j] a cada iteração

        for(int i = 0; i < 3; i++) //Vai correr as linhas
        {
            for(int j = 0; j < 3; j++) //Vai correr colunas
            {
                aux += matriz[i,j] +" ";
            }
            aux += "\n";
        }
        Console.WriteLine(aux); 

        Console.ReadLine();                
    }
}