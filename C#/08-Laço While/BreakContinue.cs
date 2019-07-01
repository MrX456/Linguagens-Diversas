using System;

class BreakContinue
{
    static void Main(string[] args)
    {
    //A declaração break interrompe e encerra o laço quando acionada

   //Já declaração continue em estruturas de repetição
   //interrompe o laço mas ao invés de sair da estrutura ela vai para
   //a próxima iteração

        int numero;

        while (true) 
        {
            Console.WriteLine("Digite um número.");
            numero = int.Parse(Console.ReadLine());

            if (numero < 10 || numero > 20)
            {
                continue; //Se o numero estiver fora deste intervalo vai voltar ao while para a proxima iteração
            }
            else 
            {
                Console.WriteLine("numero: {0}", numero); //Senão vai exibir o numero e encerra o laço.
                break;
            }
        }
        Console.ReadLine();

    }
}