
/**/

import java.util.Scanner;

class Tabuada {

    public static void main(String[] args) {

        int fator1;
        int contador;
        int produto;

        Scanner input = new Scanner(System.in);

        System.out.println("----------------------------------------");
        System.out.println("            Tabuada Digital             ");
        System.out.println("----------------------------------------");
        System.out.println("Digite o numero que deseja ver a tabuada");
        fator1 = input.nextInt();

        contador = 1;

        // Tabuada de um número até 10
        while (contador <= 10) {

            produto = fator1 * contador;
            System.out.println(fator1 + " x " + contador + " = " + produto);
            contador++;

        }

        System.out.println("----------------------------------------");
        System.out.println("  Powered By Quantum Comp IT Solutions  ");
        System.out.println("----------------------------------------");

        input.close();
    }
}