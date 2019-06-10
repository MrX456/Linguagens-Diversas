using System;

class Ternario
{
    static void Main(string[] args)
    {
     //Podemos testar condiçoes desta outra forma
     Console.WriteLine("Digite 1 ou 2");
     string userValue = Console.ReadLine();

//Se o valor digitado for 1 depois de ? condição verdadeira
//após : condição falsa
     string message = (userValue == "1") ?   "carro" : "nada";
     //Se for 1 message recebe carro senão recebe nada
     Console.WriteLine("Você ganhou " +message);
     Console.ReadLine();
    }
}