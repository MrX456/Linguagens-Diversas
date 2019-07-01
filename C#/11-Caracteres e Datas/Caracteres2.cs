using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

class Caracteres2
{
    static void Main(string[] args)
    {
        //Agora vamos usar a substring
        string texto = " Utilizando a substring ";
        //Utilizando a substring podemos indicar a partir de qual caracter vamos exibir o texto
        string sub = texto.Substring(6); //Sera mostrado a partir do sexto caractere da string texto
        string sub2 = texto.Substring(4, 9);//Mostra a partir do 4 e para no nono caracter

        //Vai mostrar a string toda em letras maiusculas
        string maiusc = texto.ToUpper();

        //Podemos substituir elemento da string por outro, por exemplo os espaços por -
        string troca = texto.Replace(" ", "-");

        //Podemos remover elementos da string. Vamos remover "a substring"
        string remove = texto.Remove(10);

        //Podemos remover os espaços no inicio e no fim;
        string tira = texto.Trim();


        //Para trabalhar com concatenação de muitas strings temos uma classe
        StringBuilder texto2 = new StringBuilder();

        for (int i = 0; i < 100; i++) 
        {
            texto2.Append("--"); //Cada numero sera separado por --
            texto2.Append(i);
        }

        Console.WriteLine(sub);
        Console.WriteLine(sub2);
        Console.WriteLine(maiusc);
        Console.WriteLine(troca);
        Console.WriteLine(remove);
        Console.WriteLine(tira);
        Console.WriteLine("Usando classe StringBuilder");
        Console.WriteLine(texto2);
        Console.ReadLine();
    }
}