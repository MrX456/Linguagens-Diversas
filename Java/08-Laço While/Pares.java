import java.util.Scanner;

class Pares {
    public static void main(String[] args) {
        // Vamos usar o while para mostar os numeros pares de 0 ate onde o usuario
        // quiser
        // mas vamos limitar este intervalo ate 100
        Scanner entrada = new Scanner(System.in);
        int par;
        int cont = 0;
        int total = 0;

        System.out.println("Digite um numero ate 100 :");
        par = entrada.nextInt();

        if (par > 0 && par <= 100) {
            System.out.println("Os numeros pares do intervalo " + cont + " ate " + par + " sao :");
            while (cont <= par) {
                System.out.println(cont);
                cont += 2;
                total++;
            }
            System.out.println("Total de pares neste intervalo : " + total + " numeros.");
        } else {
            System.out.println("O valor maximo deve ser 100!");
        }
        entrada.close();
    }
}