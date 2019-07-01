using System;

class For_laco
{
    static void Main(string[] args)
    {
   //Podemos também fazer repetições através do laço FOR
   //Vamos fazer um contador de 0 a 10

        for(int i = 0; i <= 10; i++)
        {
            Console.WriteLine(i);
        }
        Console.ReadLine();     
    }
   //No codigo acima primeiro declaramos a variavel, inclusive seu tipo, depois a condição
   //o valor deve ser menor ou igual a 10, por ultimo indicamos que esta variavel sera incrementada
   //em 1 a cada repetição. Enquato valor da varivel estiver dentro da condição esse laço vai 
   //executando, quando chega até o limite da condição (menor ou igual 10)o laço se encerra. 
}