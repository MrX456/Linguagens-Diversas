import java.util.Scanner;

class SwitchString {
    public static void main(String[] args) {
        // vamos usar o switch case com String
        Scanner entrada = new Scanner(System.in);
        String cor;

        System.out.println("Digite uma cor: amarelo / vermelho / verde");
        cor = entrada.nextLine();

        switch (cor) {
        case "vermelho":
            System.out.println("Pare!");
            break;

        case "amarelo":
            System.out.println("Atencao!");
            break;

        case "verde":
            System.out.println("Siga!");
            break;

        default:
            System.out.println("Cor invalida!");
        }
        entrada.close();
    }
}