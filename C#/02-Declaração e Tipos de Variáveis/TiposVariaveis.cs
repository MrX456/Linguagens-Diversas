using System;

class Tipos_dados
{
    static void Main(string[] args)
    {
     /* Vamos declarar alguns tipos de variaveis em C#
     decalaramos o tipo depois o nome e por ultimo o valor se necessario */

     int x = 1; //Variavel que armazena um numero inteiro

     // Para outros inteiros de varios tamanhos temos
     sbyte a = 2;
     short b = 4;
     long c = 12;

    //Variavel que armazena um numero real(Com ponto flutuante)
     float y = 1.6F; //Deve ser prosseguida por F ou será considerado como double
     double z = 1.345; //Temos tambem double para valores maiores

     string nome = "Maria";//variavel que armazena cadeia de caracteres(deve estar entre aspas"").

     bool jogar = true; //Variavel booleana. Tambem pode ser false.

     

    //Vamos ebibir todas variaveis
    Console.WriteLine(x);
    Console.WriteLine(a);
    Console.WriteLine(b);
    Console.WriteLine(c);
    Console.WriteLine(y);
    Console.WriteLine(z);
    Console.WriteLine(nome);
    Console.WriteLine(jogar);
    Console.ReadLine();


    }
}