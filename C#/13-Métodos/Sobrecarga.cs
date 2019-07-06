using System;

class Sobrecarga
{
    //Podemos sobrecarregar um método atribuindo a ele tipos ou quantidade 
    //de parâmetros diferentes

    //Aqui o método recebe um parâmetro e retorna quadrado
    public static double potencia(int x) 
    {
        return x * x;
    }

    //Aqui o mesmo método recebe 2 e retorna x elevado a y
    public static double potencia(int x, int y) 
    {
        return Math.Pow(x, y); //x elevado a y
    }


    static void Main(string[] args)
    {
        int a = 2;
        int b = 3;

        //Se passarmos 1 parametro será chamado o metodo que retorna quadrado do numero
        Console.WriteLine("Método com 1 parâmetro: {0}", potencia(a));

        //Se passarmos 2 parametros será chamado o metodo que retorna a elevado a b
        Console.WriteLine("Método com 2 parâmetros: {0}", potencia(a, b));
        Console.ReadLine();
    }
}