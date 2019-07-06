using System;

class Programa
{
   //Por padrão as enumerações possuem indices do tipo int, mas podemos
   //definir qual será este tipo contanto que seja um tipo que retorne 
   //um inteiro
    //Vamos usar o tipo byte

    enum Dia: byte { Domingo, Segunda, Terça, Quarta, Quinta, Sexta, Sábado };

    static void Main(string[] args)
    {
        Dia dias = Dia.Domingo;
        Console.WriteLine("Primeiro indice {0}", (byte)dias);

        //Agora vamos mostrar todos
        for (int i = 0; i < 7; i++ ) 
        {
            Console.Write("{0} ", dias);
            dias++;
        }
        Console.ReadLine();

    }
}