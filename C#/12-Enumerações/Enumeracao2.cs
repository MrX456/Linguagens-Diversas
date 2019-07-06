using System;

class Enumeracao2
{
    //Enumerações possuem indices, por padrão estes indices começam a partir do 0
    //Podemos verificar o indice de um elemento convertendo-o para o tipo int

    enum Letras {a, b, c, d, e, f, g, h };

    static void Main(string[] args)
    {
        Letras primeira = Letras.a;
        Letras ultima = Letras.h;

        Console.WriteLine("Indice da Letra a : {0}", (int)primeira);//Mostra qual indice da letra a
        Console.WriteLine("Indice da ultima letra : {0}", (int)ultima);
        Console.ReadLine();

    }
}