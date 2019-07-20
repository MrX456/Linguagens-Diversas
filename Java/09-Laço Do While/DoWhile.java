import java.util.Scanner;

class DoWhile {
    public static void main(String args[]) {
        // O laço do while executa o bloco pelo menos uma vez pois o teste só é feito no
        // final do bloco
        Scanner entrada = new Scanner(System.in);
        int x;
        int y;
        String sair;

        do {
            System.out.println("Calculadora de subtracao");
            System.out.println("Digite o primeiro valor :");
            x = entrada.nextInt();

            System.out.println("Digite o segundo valor :");
            y = entrada.nextInt();
            entrada.nextLine();// Necessario para usar scanner em sair

            int sub = x - y;

            System.out.println(x + " - " + y + " = " + sub);
            System.out.println("Deseja sair s / n");
            sair = entrada.nextLine();

        } while (!(sair.equals("s")));

        // Enquanto sair NÂO receber s este laço será executado
        entrada.close();
    }
}