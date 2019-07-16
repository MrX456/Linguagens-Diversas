
//Pacotes necessarios
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class Arquivo {
    public static void main(String[] args) {
        /*
         * Podemos criar arquivos txt em java Aqui criamos um objeto File onde parametro
         * é o caminho onde será salvo, lembrado que \ é um caracter de escape se for
         * utilizado sozinho OBS: Colocar o usuario do sistema corretamente
         */
        File arquivo = new File("C:\\\\Users\\MeuUsuario\\arquivo.txt");
        // Arquivo será criado na pasta de usuario

        // Pode ocorrer uma exceção ao criar o arquivo então devemos trata-la
        try {
            // Para criar o arquivo
            arquivo.createNewFile();
            System.out.println("Arquivo criado com sucesso!");

            // Se quisermos escrever algo nesse arquivo precisamos do Filewriter
            // e passamos o arquivo como parâmetro
            FileWriter escrever = new FileWriter(arquivo);

            // Agora usamos métodos para a escrita
            escrever.write("Ola mundo");
            // Para confirmar a escrita no arquivo
            escrever.flush();
            // Para encerrar e salvar o documento
            escrever.close();

        }
        // Exceções são do tipo IOException
        catch (IOException ex) {
            System.out.println("Impossivel criar arquivo");
        }
    }
}
