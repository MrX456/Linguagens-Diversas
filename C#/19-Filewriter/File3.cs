using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace ConsoleTest
{
    class File3
    {
        static void Main(string[] args)
        {

            try
            {
                //É possivel passar valores de variaveis para o arquivo
                int x = 1;
                int y = 2;
                string nome = "Sharon";
                double pi = 3.14159;

                Console.WriteLine("Criando arquivo...");

                //Aqui temos o caminho e nome do arquivo(Sera criado na pasta raiz do programa)
                string arq = @"arquivo.txt";

                //Para escrever no arquivo vamos usar a classe StreamWriter
                using (StreamWriter sw = new StreamWriter(arq))
                {
                    //Vamos escrever as variaveis no arquivo de texto
                    sw.WriteLine("Variaveis");

                    sw.WriteLine(x);
                    sw.WriteLine(y);
                    sw.WriteLine(nome);
                    sw.WriteLine(pi);

                    //Precisamos fechar o StreamWriter ou ele ficará na memória enquanto o programa
                    //for executado
                    sw.Close();

                    Console.WriteLine("Arquivo criado com sucesso!");
                }

            }
            catch (Exception)
            {
                //Caso o arquivo não possa ser criado esta clausula será acionada
                Console.WriteLine("Não foi possivel criar o arquivo!");
            }
            finally 
            {
                Console.ReadLine();
            }
        }
    }
}
