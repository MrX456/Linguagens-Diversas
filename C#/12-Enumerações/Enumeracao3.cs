using System;

class Programa
{
    //Tambem podemos definir a partir de qual indice a enumeração 
    //vai começar
    //O primeiro indice será 10
    enum PontoCardeal {norte = 10, sul, leste, oeste };

    static void Main(string[] args)
    {
        PontoCardeal direcao1 = PontoCardeal.norte;
        PontoCardeal direcao2 = PontoCardeal.oeste;

        Console.WriteLine("Primeiro Indice : {0}", (int)direcao1);//Primeiro indice
        Console.WriteLine("Ultimo Indice : {0}", (int)direcao2);
        Console.ReadLine();

    }
    //Por padrão as enumerações possuem indices do tipo int, mas podemos
   //definir qual será este tipo contanto que seja um tipo que retorne 
   //um inteiro. byte, short, long...
}