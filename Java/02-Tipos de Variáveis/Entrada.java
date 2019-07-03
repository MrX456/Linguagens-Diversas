import java.util.Scanner;

/*Para receber comandos de entrada devemos importar a classe Scanner */

class Entrada {
    public static void main(String[] args) {
        /* Agora precisamos criar um objeto da classe Scanner */
        Scanner entrada = new Scanner(System.in);

        System.out.println("Digite seu nome : ");
        String nome = entrada.nextLine(); /* O nome digitado sera armazenado em uma variavel */

        System.out.println("Digite sua idade : ");
        int idade = entrada.nextInt(); /* O numero digitado sera armazenado em uma variavel */

        System.out.println("Valores digitados pelo usuario :");
        System.out.println(nome);
        System.out.println(idade);

        entrada.close(); /* Vamos fechar o Scanner */
    }
}