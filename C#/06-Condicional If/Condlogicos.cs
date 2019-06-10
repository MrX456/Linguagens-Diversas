using System;

class Condlogicos
{
    static void Main(string[] args)
    {
//Vamos usar condicionais e operadores logicos nos testes
        string pessoa1 = "Maria";
        string pessoa2 = "Janaina";
        string pessoa3 = "Camila";
        int idadePessoa1 = 21;
        int idadePessoa2 = 18;
        int idadePessoa3 = 22;

    Console.WriteLine(pessoa1 +" tem " +idadePessoa1 +" anos ");
    Console.WriteLine(pessoa2 +" tem " +idadePessoa2 +" anos ");
    Console.WriteLine(pessoa3 +" tem " +idadePessoa3 +" anos ");

    if(idadePessoa1 > idadePessoa2 && idadePessoa1 > idadePessoa3)
    {
        Console.WriteLine(pessoa1 +" é a mais velha. Com " +idadePessoa1 +" anos.");
    }
    else if(idadePessoa2 > idadePessoa1 && idadePessoa2 > idadePessoa3)
    {
        Console.WriteLine(pessoa2 +" é a mais velha. Com " +idadePessoa2 +" anos.");
    }
    else if(idadePessoa3 > idadePessoa1 && idadePessoa2 < idadePessoa3)
    {
        Console.WriteLine(pessoa3 +" é a mais velha. Com " +idadePessoa3 +" anos.");
    }
    Console.ReadLine();

//Este algoritmo faz uma comparação entre a idade das 3  e define quem é mais velha.
    }
}