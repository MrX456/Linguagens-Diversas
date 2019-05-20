using System;

class Entrada
{
    static void Main(string[] args)
    {
    //Aqui vamos receber comando de entrada do usuario    
        Console.Write("Digite seu nome : ");//Este comando não pula para a próxima linha
        string nome = Console.ReadLine();//Read line recebe comandos de entrada

     //vamos exibir o nome na tela
        Console.WriteLine(nome); 
        Console.ReadLine();  
    }
}