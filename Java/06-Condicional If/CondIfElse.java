import java.util.Scanner;

class CondIfElse {
    public static void main(String[] args) {
        // Aqui teremos um condicional composto if else, teremos dois blocos e apenas um
        // deles pode ser executado
        String nome;
        int num;

        Scanner entrada = new Scanner(System.in);

        System.out.println("Digite seu nome :");
        nome = entrada.nextLine();

        System.out.println("Seja bem vindo " + nome);
        System.out.println("Escolha um numero: 1 ou 2");
        num = entrada.nextInt();

        // Vamos testar e valor de num
        // Se expressão for verdadeira executa este bloco
        if (num == 1) {
            System.out.println("Parabens voce ganhou uma casa!");
        }
        // Se for falsa ignora o bloco acima e executa este
        else {
            System.out.println("Numero errado, tente na proxima vez!");
        }
        // Mesmo se usuario digitar qualquer outra coisa se for diferente de 1 executa
        // bloco do else
        entrada.close();
    }
}