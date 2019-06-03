using System;

class Logico
{
    static void Main(string[] args)
    {
    //Os operadores lógicos em C# são:
    // && e = teste retorna VERDADEIRO se e somente se as duas condições forem verdadeiras
    // || ou = teste retorna VERDADEIRO se pelo menos uma das condições for verdadeira
    // ! não = Inverte o resultado do teste lógico

        double k = 1.2;
        double l = 1.5;
        double m = 1.2;
        bool teste;
    
    //Teste com operador E
        teste = (k == m && k <= m);
        Console.WriteLine(teste); //Retorna true pois as duas expressões são verdadeiras
       
        teste = (k == l && k <= m);
        Console.WriteLine(teste); //Retorna false pois apenas uma expressão é verdadeira

    //Teste com operador OU
        teste = (k < l || k != m);    
        Console.WriteLine(teste); //Retorna true pois pelo menos uma expressão é verdadeira

        teste = (k == l || k > m);
        Console.WriteLine(teste); //Retorna false pois as duas expressões são falsas

    //Teste com operador NÂO
        teste = !(k == m);
        Console.WriteLine(teste); //Retorna false pois resultado do teste foi invertido   

        Console.ReadLine();
        
    }
}