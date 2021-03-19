using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace ConsoleApplication1
{
    //Agora vamos tratar exceções que são erros que podem acontecer
    //durante a execução do programa interrompendo o fluxo do código
    //e causando o travamento do programa

    //Aqui será tratada uma exceção em que o programa deverá escrever um
    //arquivo do disco que está com seu caminho absoluto errado, então
    //não poderá ser encontrado pelo programa que vai retornar uma exceção

    class Excecao
    {
        static void Main(string[] args)
        {
         /* string texto = File.ReadAllText(@"C:\Pastainexistente\texto.txt");
        //Exceção foi gerada pois diretório não existe
          Console.WriteLine(texto);
          Console.ReadLine();*/

        //Para tratar exceções usamos os blocos try e catch, opcionalmente podemos
        //usar o finnaly tambem


           //Colocamos o código que pode gerar a exceção aqui 
            try
            {
                string texto = File.ReadAllText(@"C:\Pastainexistente\texto.txt");
                Console.WriteLine(texto);
            }


            //Podemos usar varios tipos de excecoes: Arquivo não encontrado
            catch (FileNotFoundException excecao)
            {
                Console.WriteLine("Arquivo não encontrado. Verifique se o nome foi digitado corretamente.");
            }


            catch (DirectoryNotFoundException excecao)//Este bloco será acionado
            {
                Console.WriteLine("Diretório não encontrado. Verifique se o nome foi digitado corretamente.");
            }


            //Vai capturar a exceção se ela acontecer. Exception é tipo mais geral possivel
            catch (Exception excecao)
            {
                //Retornara esta mensagem de erro ao usuario
                Console.WriteLine(excecao.Message);
            }


            //Este bloco é opcional mas se for utilizado será executado independentemente se ocorrer ou 
            //não a exceção. Pode ser usado para fechar conexao a um banco de dados, deixar objetos nulos, etc..
            finally 
            {
                Console.WriteLine("Finalizando programa...");
            }
          Console.ReadLine();

            /*O tipo de exceção tratada pode ser mais especifica, basta passar como argumento para o catch
            (FileNotFoundException), (DirectoryNotFoundException), (UnauthorizedAcessException)... Pode se 
             ver mais tipos na documentação do C#
             OBS: Mensagens de exceções devem ser bem claras para o usario para que ele possa usar o software
             e fazer as operações que deseja
             */
        }
    }
}
