import java.io.File;

class Diretorio2 {
    public static void main(String[] args) {

        //Localização do diretório 
        File pasta = new File("C:\\\\Users\\MeuUsuario\\zzzzzzz");
 

        File arquivo = new File(pasta, "arquivo.txt");

        //Podemos renomear um arquivo arquivo desta maneira
        File arquivoRenomeado = new File(pasta, "arquivo_renomeado.txt");
        boolean teste = arquivo.renameTo(arquivoRenomeado);
        System.out.println("Arquivo renomeado ? " + teste);
        //Obs: O arquivo inicial já deve ter sido criado para poder ser renomeado
 
        //Também podemos renomear um diretório
        File dirRen = new File("C:\\\\Users\\MeuUsuario\\zzzzzzz2");
        boolean renomeou = pasta.renameTo(dirRen);
        System.out.println("Diretorio renomeado ? " + renomeou);

    }
}