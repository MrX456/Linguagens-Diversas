using System;

class Enumeracao
{
    //Podemos usar enumerações para enumerar os meses
    //Para utilizar enumerações usamos:
    enum Mes {Janeiro, Fevereiro, Março, Abril, Maio, Junho,
              Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};

    enum Dia {Domingo, Segunda, Terça, Quarta, Quinta, Sexta, Sábado};

    static void Main(string[] args)
    {
    //Toda ves que criarmos variaveis do tipo Mes, elas poderão usar os 
    //valores que estão na enumeração
        Mes primeiro = Mes.Janeiro;

        Dia quinto = Dia.Quinta;

        Console.WriteLine("Dia : {0} , Mês : {1}", quinto, primeiro);
        Console.ReadLine();

    }
}