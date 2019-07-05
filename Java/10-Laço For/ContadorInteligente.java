import java.util.Scanner;

class ContadorInteligente {
    public static void main(String args[]) {
        // Contador que incrementa ou decrementa dependo dos valores passados pelo
        // usuario
        int i;
        int j;
        Scanner entrada = new Scanner(System.in);

        System.out.println("Contador inteligente");
        System.out.println("---------------------");
        System.out.println("Digite um valor :");
        i = entrada.nextInt();

        System.out.println("Digite outro valor :");
        j = entrada.nextInt();

        System.out.println("Contando...");

        if (i < j) {
            for (int c = i; c <= j; c++) {
                System.out.println(c);
            }
        } else if (i > j) {
            for (int c = i; c >= j; c--) {
                System.out.println(c);
            }
        }
        entrada.close();
    }
}