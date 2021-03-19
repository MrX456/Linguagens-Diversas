using System;

class Excecao
{
    static void Main(string[] args)
    {
        //Agora vamos tratar exceções que são erros que podem acontecer
        //durante a execução do programa interrompendo o fluxo do código
        //e causando o fechamento insperado do programa

        //Aqui será tratada uma exceção de uma divisão por 0 que não é possivel
        //de ser feita
        
        //A parte do código que pode gerar a excecao deve ser colocada dentro
        //de um bloco try. O programa tentara executar este código
        try 
        {
            int x = 8;
            int y = 0;
            int div = x / y;
        }

        //Com o catch capturamos a exceção e podemos retornar uma mensagem mais amigavel
        //ao usuario, que irá identificar o que aconteceu. O programa não terá seu fluxo interrompido.
        // O tipo de excecao mais geral é Exception mas podemos ser mais especificos

        catch(DivideByZeroException excecao)
        {
            Console.WriteLine("Não é possivel fazer divisões por 0.");
        }

        Console.ReadLine();
    }
}