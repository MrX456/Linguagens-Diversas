using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace ConsoleTest
{
    class File1
    {
        static void Main(string[] args)
        {

            try
            {
                //Vamos criar um arquivo no formato txt(Precisamos importar a bibilioteca System.IO)

                Console.WriteLine("Criando arquivo...");

                //Aqui temos o caminho e nome do arquivo(Sera criado na pasta raiz do programa)
                string nome = @"arquivo.txt";

                //Criação do arquivo
                using (FileStream fs = File.Create(nome))
                {
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
