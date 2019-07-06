using System;

class Programa
{

    //Podemos passar os parâmetros por referência. Quando isto é feito, é passado ao método
    //o endereço da memória que contém o valor da variavel, então se o método alterar alguma coisa
    //nesse endereço, a variavel receberá esta alteração também.

    //Para isso é usado ref
    public static void soma(ref int a)
    {
        a = a + 40;
    }

    static void Main(string[] args)
    {
        //Valor inicial
        int x = 4;
        Console.WriteLine(x);

        //Chamando método e passando x como parâmetro(não esquecer do ref)
        soma(ref x);

        //Valor de x foi alterado
        Console.WriteLine(x);

       
        Console.ReadLine();
    }
}