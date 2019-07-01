using System;

class Datas
{
    static void Main(string[] args)
    {
        //Para usar datas e horas podemos usar classe DateTime
        DateTime data = DateTime.Now; //Momento atual

        Console.WriteLine(data.ToString()); //vai exibir data 

        //Exibir apenas dia mes e ano
        Console.WriteLine(data.ToShortDateString());

        //Exibir apenas a hora
        Console.WriteLine(data.ToShortTimeString());

        //Exibir a data mais detalhada
        Console.WriteLine(data.ToLongDateString());

        //Exibir hora mais detalhada
        Console.WriteLine(data.ToLongTimeString());

        //Adicionar dias ou horas segundos,etc
        Console.WriteLine(data.AddDays(3).ToLongDateString());//Foi adicionado 3 dias a data

        //Mostra apenas valor do mes
        Console.WriteLine(data.Month);

        //Podemos mostrar uma data qualquer
        DateTime ontem = new DateTime(2019, 05, 15);

        Console.WriteLine(ontem.ToLongDateString());

        //Vamos ver quantos dias se passaram desde a data declarada
        DateTime data2 = new DateTime(1966, 04, 04);
        TimeSpan dias = DateTime.Now.Subtract(data2); //Vamos subtrair a data2

        Console.WriteLine(dias.TotalDays);//Mostra total de dias
        Console.ReadLine();
    }
}