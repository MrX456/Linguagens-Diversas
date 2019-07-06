using System;

class Declaravetor
{
    static void Main(string[] args)
    {
 //Agora vamos declarar um vetor(Variavel composta unidimensional) em C#
 //Primeiro declaramos o tipo seguido de[], depois o nome, depois podemos
 //colocar valores nesse vetor (pode ser feito de duas formas).

    //Forma 1
        int[] valores = new int[] {1, 2, 4, 7, 10};  //temos 5 elementos
    //Forma 2
        int[] values = {1, 2, 4, 7, 10}; 


//Para exibir um vetor completo precisamos de um laço for para iterar cada indice desse vetor
//até o seu tamanho total
        for(int i = 0; i < valores.Length; i++)
        {
            Console.WriteLine(valores[i]);//Vai escrever cada valor em uma linha
        }

        Console.WriteLine("Vetor 2:");
        for(int i = 0; i < values.Length; i++)
        {
            Console.WriteLine(values[i]);
        } 
        Console.ReadLine();  
    }
}