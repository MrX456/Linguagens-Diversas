import java.io.File;

class Diretorio3 {
    public static void main(String[] args) {
        // Tambem podemos fazer uma busca de arquivos dentro do diretório
        File busca = new File("C:\\\\Users\\MeuUsuario\\zzzzzzz2");
        // precisaremos de um array de String
        String[] lista = busca.list();

        for (String arq : lista) {
            System.out.println(arq);
        }
        // Aqui será retornado uma lista do que está dentro do diretório apontado
    }
}