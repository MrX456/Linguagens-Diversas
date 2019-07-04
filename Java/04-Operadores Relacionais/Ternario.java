import java.util.Scanner;

class Ternario {
    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
        int cor;
        String escolha;

        System.out.println("Qual cor voce prefere ?");
        System.out.println("Digite 1 para AZUL");
        System.out.println("Digite qualquer valor para VERMELHO");
        cor = entrada.nextInt();

        // Operador ternario em java
        // teste ? condição verdadeira : condição falsa
        escolha = cor == 1 ? "azul" : "vermelho";

        System.out.println("Voce escolheu a cor " + escolha);
        entrada.close();
    }
}