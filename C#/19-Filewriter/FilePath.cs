using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace ConsoleTest
{
    class FilePath
    {
        static void Main(string[] args)
        {

            try
            {
                Console.WriteLine("Criando arquivo...");

                //Podemos especificar onde o arquivo será salvo adicionando o caminho da pasta ao nome
                //do arquivo("C:\\arquivo.txt") será salvo no disco C(pode exigir privilégios de administrador)

                //Podemos pegar o caminho de diversas pastas de maneira mais genérica, isto permite que o arquivo
                //possa ser criado em qualquer computador

                //Vamos salvar o arquivo na area de trabalho
                string path = System.Environment.GetFolderPath(Environment.SpecialFolder.Desktop);
                string arq = path + @"\\arquivo.txt";

                //Temos outras pastas como MyDocuments, MyMusic, Programs, etc.

                //Para escrever no arquivo vamos usar a classe StreamWriter
                using (StreamWriter sw = new StreamWriter(arq))
                {
                    //Vamos escrever as variaveis no arquivo de texto
                    sw.WriteLine("Arquivo criado pelo c#");

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
