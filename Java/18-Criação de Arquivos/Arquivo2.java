import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Arquivo2 {
    public static void main(String[] args) {
        // Ao escrever arquivo txt podemos usasr variaveis tambem
        String x;
        String y;
        Scanner entrada = new Scanner(System.in);

        System.out.println("Digite alguma coisa : ");
        x = entrada.nextLine();

        System.out.println("Digite outra coisa : ");
        y = entrada.nextLine();

        try {
            // Agora estas variaveis podem ser escritas no txt
            File arquivo_var = new File("C:\\\\Users\\MeuUsuario\\arquivo_var.txt");

            arquivo_var.createNewFile();
            System.out.println("Arquivo criado com sucesso!");

            // Escrever no arquivo
            FileWriter escrever = new FileWriter(arquivo_var);

            escrever.write("Voce digitou " + x);
            // Qubrar linha
            escrever.write(System.getProperty("line.separator"));
            escrever.write("Voce digitou " + y);

            // Confirmar
            escrever.flush();
            // Sair e salvar
            escrever.close();

        } catch (IOException ex) {
            System.out.println("Impossivel criar arquivo");
        } finally {
            entrada.close();
            System.out.println("Encerrando programa...");
        }
    }
    // OBS: Existem outras classes melhores que o FileWriter para tratar este tipo
    // de arquivo
}
