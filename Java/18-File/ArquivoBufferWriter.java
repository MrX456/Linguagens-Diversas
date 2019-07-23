import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class ArquivoBufferWriter {
    public static void main(String[] args) {

        int x = 4;
        String frase = "Hey Jude, don't make it bad";

        // As classes BufferedReader e BufferedWriter são muito
        // mais completas na criação de arquivos txt
        // Precisaremos do filewriter para criar o arquivo

        File arquivo = new File("C:\\\\Users\\MeuUsuario\\arquivo.txt");
        // Arquivo será criado na pasta de usuario
        try {
            FileWriter fw = new FileWriter(arquivo);

            // Aqui instanciamos BufferedWriter passando fw ao construtor
            BufferedWriter bw = new BufferedWriter(fw);

            // Agora faremos a manipulação deste arquivo através do objeto bw
            bw.write("Escrevendo com Buffered Writer...");
            // este método insere quebra de linha
            bw.newLine();
            bw.write("Segunda linha");
            bw.newLine();
            bw.write("Terceira linha");
            bw.newLine();
            bw.write("variaveis declaradas no inicio do programa :");
            bw.newLine();
            bw.write(String.valueOf(x));// Comando write aceita apenas Strings
            bw.newLine();
            bw.write(frase);

            // flush e close utilizando bw
            bw.flush();
            bw.close();

            System.out.println("Arquivo gerado com sucesso");

        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}
