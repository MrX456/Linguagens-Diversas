import java.util.Scanner;

class Fatorial {
    public static void main(String args[]) {
        // Podemos usar o do while em uma algoritmo para calculo de fatorial
        long c, n, f;
        String resp;
        Scanner entrada = new Scanner(System.in);

        // Vamos usar dois do while
        do {
            System.out.println("Digite um numero :");
            n = entrada.nextLong();
            c = n;
            f = 1;

            do {
                System.out.print(c + " X ");
                f = f * c;
                c -= 1;
            } while (c >= 1);

            System.out.println("\nO fatorial de " + n + " e " + f);
            System.out.println("Deseja fazer outra operacao? [s/n]");
            resp = entrada.next();
        } while (resp.equals("s"));

        entrada.close();
    }
}