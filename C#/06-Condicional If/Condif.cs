using System;

class Condif 
{
    static void Main(string[] args)
    {
     //Vamos utilizar o condicional IF  simples para testar uma condição
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
/* Se o usario digitar qualquer outra coisa diferente de 1 bloco de código acima não sera executado
 e o programa encerra porqu não tem mais código*/
    }
}