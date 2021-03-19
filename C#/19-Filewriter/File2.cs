using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace ConsoleTest
{
    class File2
    {
        static void Main(string[] args)
        {

            try
            {
                //É possivel escrever em um arquivo criado

                Console.WriteLine("Criando arquivo...");

                //Aqui temos o caminho e nome do arquivo(Sera criado na pasta raiz do programa)
                string nome = @"arquivo.txt";

                //Para escrever no arquivo vamos usar a classe StreamWriter
                using (StreamWriter sw = new StreamWriter(nome))
                {
                    //Vamos escrever um texto no arquivo criado com o método WriteLine()
                    sw.WriteLine("Arquivo criado pelo C#");

                    //O método Write não adiciona a quebra de linha
                    sw.Write("Escrito com metodo ");
                    sw.Write("Write");

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
