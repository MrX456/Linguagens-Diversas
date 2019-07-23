
import java.io.File;
import java.io.IOException;

class Diretorio {
    public static void main(String[] args) {
        // Tambem podemos usar a classe File para manipular diretórios(pastas)
        // Vamos instanciar um objeto file
        // e criar o diretório na pasta do usuario

        File pasta = new File("C:\\\\Users\\MeuUsuario\\zzzzzzz");

        // Para criar o diretorio usamos
        boolean criar = pasta.mkdir();
        // Este boolean é apenas para verificar se pasta foi criada
        // deve retornar true

        System.out.println("Diretorio zzzzzzz criado ? " + criar);

        // Caso diretório ja exista não poderá ser criado novamente

        // Agora vamos colocar um arquivo txt neste diretório
        File arquivo = new File(pasta, "arquivo.txt");
        try {
            arquivo.createNewFile();
            System.out.println("Arquivo criado com sucesso!");
        } catch (IOException ex) {
            System.out.println("Falha ao criar arquivo!");
        }

    }
}
