using System;

class Valor
{
    //Quando utilizamos parâmetros dentro de um método podemos passa-los
    //por valor. O método pode fazer suas operações sem alterar o valor
    //da variavel do chamador

    public static int multiplicacao(int a, int b) 
    {
       int multi = a * b;
        return multi;
    }

    static void Main(string[] args)
    {
        int x = 2;
        int y = 3;
        Console.WriteLine("x={0} y={1}", x, y);

        //Chamando método
        Console.WriteLine("Método chamado");
        Console.WriteLine(multiplicacao(x, y));

        //Valores das variaveis foram preservados
        Console.WriteLine("x={0} y={1}", x, y);
        Console.ReadLine();
       
    }
}