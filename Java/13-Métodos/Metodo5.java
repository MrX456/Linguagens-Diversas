import java.util.Scanner;

class Metodo5 {
    // Agora faremos uma calculadora de 4 operações com métodos de retorno

    // Soma
    static int soma(int x, int y) {
        int z = x + y;
        return z;
    }

    // Subtração
    static int subtracao(int x, int y) {
        int z = x - y;
        return z;
    }

    // Multiplicação
    static int multiplicacao(int x, int y) {
        int z = x * y;
        return z;
    }

    // Divisão
    static double divisao(int x, int y) {
        double z = (double) x / (double) y;
        return z;
    }

    public static void main(String args[]) {
        Scanner entrada = new Scanner(System.in);
        int a;
        int b;
        int escolha;

        System.out.println("Digite um valor:");
        a = entrada.nextInt();

        System.out.println("Digite outro valor:");
        b = entrada.nextInt();

        System.out.println("Digite 1 para SOMA");
        System.out.println("Digite 2 para SUBTRACAO");
        System.out.println("Digite 3 para MULTIPLICAO");
        System.out.println("Digite 4 para DIVISAO");
        escolha = entrada.nextInt();

        switch (escolha) {
        case 1:
            int d = soma(a, b);
            System.out.println(a + " + " + b + " = " + d);
            break;

        case 2:
            int e = subtracao(a, b);
            System.out.println(a + " - " + b + " = " + e);
            break;

        case 3:
            int f = multiplicacao(a, b);
            System.out.println(a + " x " + b + " = " + f);
            break;

        case 4:
            double g = divisao(a, b);
            System.out.println(a + " / " + b + " = " + g);
            break;

        default:
            System.out.println("Operacao invalida");
        }
        entrada.close();
    }
}