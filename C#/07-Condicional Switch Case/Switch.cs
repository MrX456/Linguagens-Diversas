using System;

class Switch
{
    static void Main(string[] args)
    {
 //Vamos usar outro condicional o Switch Case
        string x; //Todo dado recebido é uma string
        Console.WriteLine("Seja bem vindo");
        Console.WriteLine("Escolha um valor para ganhar um prêmio : 1, 2 ou 3");
        x = Console.ReadLine();
 //Vamos verificar o valor da variavel x
        switch (x)
        {
     // Se valor de x = 1
            case "1":
                Console.WriteLine("Parabéns, você ganhou um carro!");
     //Se esta codição for verdadeira devemos interromper o fluxo para não testar as demais
                break;  
    // Se valor de x = 2         
            case "2":
                Console.WriteLine("Parabéns, você ganhou um barco!");
                break; //Se esta condição for verdadeira não testar as seguintes
     // Se valor de x = 3
            case "3":
                Console.WriteLine("Parabéns, você ganhou uma casa!");
                break;
    // Se valor de x = qualquer outra coisa
            default:
                Console.WriteLine("Valor inválido");
                break;                            
        }
        Console.ReadLine();                 
    }
}
