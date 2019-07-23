import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.FileReader;
import java.io.IOException;

class ArquivoBufferWriterReader {
    public static void main(String[] args) {
        // As classes BufferedReader e BufferedWriter são muito
        // mais completas na manipulação de arquivos txt

        File arquivo = new File("C:\\\\Users\\MeuUsuario\\arquivo.txt");

        // Podemos fazer a leitura e a escrita com BufferedReader e BufferedWriter de
        // maneira simples
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(arquivo));
                BufferedReader br = new BufferedReader(new FileReader(arquivo))) {

            // Aqui vai a escrita no documento
            bw.write("Escrevendo com BufferedWriter...");
            bw.newLine();
            bw.write("Segunda linha");
            bw.newLine();
            bw.write("Terceira Linha");

            // fechando
            bw.flush();
            bw.close();

            // Inicio do Reader(Leitura do documento criado)
            String s;
            // Enquanto estiver lendo
            while ((s = br.readLine()) != null) {
                System.out.println(s);
            }
        } catch (IOException ex) {
            ex.printStackTrace();
        }

    }
}