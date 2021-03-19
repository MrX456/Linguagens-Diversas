using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace ConsoleTest
{
    class FileDir
    {
        static void Main(string[] args)
        {

            try
            {
                Console.WriteLine("Criando Pasta...");

                //O c# também pode criar pastas. Para criar uma pasta usamos
                string path = System.Environment.GetFolderPath(Environment.SpecialFolder.Desktop);
                string dir = path +  @"\\Folder";

                //Vai criar a pasta na area de trabalho. Se quisermos criar em outro
                //lugar podemos usar o Environment SpecialFolder

                //Agora só criar o diretório
                Directory.CreateDirectory(dir);

                //Se quisermos podemos criar um arquivo nesta pasta ou subpastas também

                
                 Console.WriteLine("Pasta criada com sucesso!");
                

            }
            catch (Exception e)
            {
                //Caso o pasta não possa ser criada esta clausula será acionada
                Console.WriteLine("Pasta não pode ser criada!");
            }
            finally 
            {
                Console.ReadLine();
            }
        }
    }
}
