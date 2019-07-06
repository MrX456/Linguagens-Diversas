using System;

class CopiaVetorCopyTo
{
    static void Main(string[] args)
    {
    //Tambem podemos copiar vetores através do método CopyTo
        int[] numeros = {4, 2, 5, 1, 3, 8};
        int[] copia = new int[numeros.Length];

        //Agora usando método CopyTo
        numeros.CopyTo(copia, 0);
        //Como este método podemos copiar todo vetor ou apenas uma parte dele,
        //depois de declarar para qual vetor queremos copiar, devemos passar como
        //parâmetro a partir de qual posição queremos copiar

        //Mostrando os vetores
        Console.WriteLine("Vetor original");
        for (int i = 0; i < numeros.Length; i++)
        {
            Console.Write(" " + numeros[i]);
        }

        //Vetor copia
        Console.WriteLine("\nVetor cópia");
        for (int i = 0; i < copia.Length; i++)
        {
            Console.Write(" " + copia[i]);
        }
        Console.ReadLine();
    }
}