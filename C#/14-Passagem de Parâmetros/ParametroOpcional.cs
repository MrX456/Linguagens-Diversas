using System;

class ParametrosOpcionais
{
    //Podemos passar parâmetros opcionais aos métodos atribuindo valores na declaração
    //Os parâmetros obrigatórios devem vir primeiro
    public static void opcional(int x, string y = "Inserido pelo método") 
    {
        string resultado = "Parâmetro obrigatório: " + x.ToString() + " Parâmetro opcional :" + y;
        Console.WriteLine(resultado);
    }
    static void Main(string[] args)
    {
        //Chamando o método com 1 parâmetro
        opcional(3);

        //Agora passamos 2 parâmetros(o segundo deve ser string)
        opcional(1, "Segundo");
        Console.ReadLine();
    }
}