using System;

class Conversao
{
    static void Main(string[] args)
    {
        //Em C# podemos converter tipos de dados. Por exemplo todo comando de entrada
        //é considerado como string, se quisermos trabalhar com numeros devemos fazer uma conversão.

        //Os tipos de conversão que podem ser feitas são

        int x = Convert.ToInt32("2");   //Classe convert
        int y = int.Parse("3");   //Método parse

        double w = Convert.ToDouble("5.2");
        double z = double.Parse("7.1");

        int a = 5;
        string b = a.ToString(); //Conversão para string

        //Também temos: ToBoolean(), ToByte(), ToChar(), ToDecimal().

    }
}