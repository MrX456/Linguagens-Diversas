import java.util.Scanner;

class IfAninhado {
    public static void main(String[] args) {
        // Vamos usar a estrutura if aninhada(uma estrutura dentro da outra)
        Scanner entrada = new Scanner(System.in);
        int anoNasc;
        int idade;

        System.out.println("Digite o ano que voce nasceu : ");
        anoNasc = entrada.nextInt();

        idade = 2019 - anoNasc;

        // Vamos verifcar se o usuario deve,pode ou não votar(tres condições)
        if (idade < 16) {
            System.out.println("Voce tem " + idade + " anos." + "Voce nao pode votar!");
        }
        // O voto é opcional para maiores de 70 anos ou 16 e 17 anos
        else if ((idade >= 16 && idade < 18) || (idade > 70)) {
            System.out.println("Voce tem " + idade + " anos." + "Seu voto e opcional!");
        }
        // A outra faixa etaria tem obrigação de votar
        else {
            System.out.println("Voce tem " + idade + " anos." + "Seu voto e obrigatorio!");
        }

        entrada.close();
    }
}