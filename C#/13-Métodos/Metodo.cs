using System;

class Metodo
{
//Método: acesso tipo_retorno nomeMétodo(parâmetros)
//Vamos criar um método que escreve na tela Hello World
//Nome do método sempre vem antes de ().
//Void indica que método não retorna nenhum dado armazenado.
    public static void HelloWorld()
    {
        Console.WriteLine("Hello World.");
    }

//Aqui se inicia o método principal(Main) onde o programa começa a ser executado
    static void Main(string[] args)
    {
//Vamos chamar o método criado sempre seguido de ()
        HelloWorld();
        Console.ReadLine();
    }
}