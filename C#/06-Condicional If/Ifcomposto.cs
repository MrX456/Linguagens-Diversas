using System;

class Ifcomposto 
{
    static void Main(string[] args)
    {
     //Vamos utilizar o condicional IF ELSE.
        string nome;

        Console.Write("Digite seu nome : ");
        nome = Console.ReadLine();

        Console.WriteLine("Escolha uma porta : 1, 2 ou 3");
        string userValue = Console.ReadLine();
        //foi definido uma string que armazena comando de entrada

        //Vamos testar a condição(Se o usuario digitar 1)
        if(userValue == "1")
        {
            Console.WriteLine("Parabéns " +nome +" você ganhou um carro!");
            Console.ReadLine();
        }
        //Se o usuario digitar 2
        //Podemos abrir um ELSE e dentro dele um IF tambem
        else if(userValue == "2")
        {
            Console.WriteLine("Parabéns " +nome +" você ganhou um barco!");
            Console.ReadLine();
        }
        //Se o usuario digitar 3
        else if(userValue == "3")
        {
            Console.WriteLine("Parabéns " +nome +" você ganhou uma casa!");
            Console.ReadLine();
        }
        //Qualquer outro valor digitado
        else
        {
            Console.WriteLine("Valor inválido");
            Console.ReadLine();
        }

    }
}