using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace ConsoleTest
{
    class FileRead
    {
        static void CriarArquivo() 
        {
            try
            {
                Console.WriteLine("Criando arquivo...");

                //O c# também ler arquivos, vamos criar um arquivo e depois lê-lo
                string arq = @"arquivo.txt";

                //Para escrever no arquivo vamos usar a classe StreamWriter
                using (StreamWriter sw = new StreamWriter(arq))
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
            catch (Exception e)
            {
                //Caso o pasta não possa ser criada esta clausula será acionada
                Console.WriteLine("Arquivo não pode ser criado!");
            }
          
        }

        static void Main(string[] args)
        {
            CriarArquivo();

            //Agora vamos ler o arquivo. Se o arquivo n;ao existir vai diparar uma exceção
            try
            {
                string arq = @"arquivo.txt";

                Console.WriteLine("--------------------------------");

                Console.WriteLine("Lendo arquivo...");

                //Vamos mostrar conteudo do arquivo no console, linha por linha
                string[] linhas = File.ReadAllLines(arq);

                //Mostrando conteudo
                foreach (string linha in linhas)
                {
                    Console.WriteLine(linha);
                }

            }
            catch (Exception)
            {
                Console.WriteLine("Arquivo não encontrado!");
            }
            finally
            {
                Console.ReadLine();
            }
        }
    }
}
