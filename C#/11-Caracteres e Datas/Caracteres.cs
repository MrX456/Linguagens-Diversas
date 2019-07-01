using System;

    class Caracteres
    {
        static void Main(string[] args)
        {
     //Agora vamos trabalhar com cadeias de caracteres
     //Vamos usar uma expressão que contem "" dentro de uma string, sem gerar erro na compilação
            //string caracteres = ""Suposto" veiculo"; aqui o compilador não consegue interpretar
            //o uso de "" nesse texto.Temos que usar \" para exibir estas aspas no console
            string caracteres = "\"Suposto\" veículo";

            //Para inserir uma quebra de linha em uma string usamos \n
            string quebra = "Quebra \nde linha";

            //Se quisermos exibir \ devemos usar @ antes da string
            string local = @"Vá para c:\ Disco local";

            //Esta função faz uma substiuição do que esta nas chaves pelo que esta "".
            string troca = String.Format("{0} = {1}", "Zero", "Um");

            //Representar simbolos monetários. Vai depender como esta configurado sistema operacional
            string moeda = String.Format("{0:C}", 123.50);

            //Formatar numeros muito grandes
            string numero = String.Format("{0:N}", 3224551292);

            //Usar simbolo de %
            string porcento = String.Format("{0:P}",0.2);

            //Formatações personalizadas, como um número de telefone
            string telefone = String.Format("{0:(##) ####-####}", 1938452550);

            Console.WriteLine(caracteres);
            Console.WriteLine(quebra);
            Console.WriteLine(local);
            Console.WriteLine(troca);
            Console.WriteLine(moeda);
            Console.WriteLine(numero);
            Console.WriteLine(porcento);
            Console.WriteLine(telefone);

            Console.ReadLine();
        }
    }

