class Notas {
    public static void main(String args[]) {
        // Vamos usar uma matriz para calcular média de 5 alunos
        // {aluno1},{aluno2},{aluno3}, {aluno4},{aluno 5}
        double[][] notas = { { 10, 9.5, 8 }, { 7.5, 8, 6.5 }, { 8.5, 7.5, 9 }, { 4.5, 6, 5 }, { 10, 10, 10 } };

        System.out.println("Notas dos alunos");

        // matriz com notas
        for (int i = 0; i < notas.length; i++) {
            for (int j = 0; j < notas[i].length; j++) {
                System.out.print(notas[i][j] + " ");
            }
            System.out.println();
        }

        // Agora vamos tirar a média de cada um
        System.out.println("------------------");
        System.out.println("Media dos alunos");

        double soma;
        for (int i = 0; i < notas.length; i++) {
            soma = 0;
            for (int j = 0; j < notas[i].length; j++) {
                soma += notas[i][j];
            }
            double media = soma / 3;
            System.out.println("A media do aluno " + i + " e = " + media);
        }

        // Agora vamos reprovar media menor que 6 e entre 6 e 7.5 recuperação
        System.out.println("------------------");
        System.out.println("Situacao dos alunos");

        for (int i = 0; i < notas.length; i++) {
            soma = 0;
            for (int j = 0; j < notas[i].length; j++) {
                soma += notas[i][j];
            }
            double media = soma / 3;
            // Situação de cada aluno
            String situacao;
            if (media < 6) {
                situacao = "Reprovado";
                System.out.println("Aluno " + i + " esta " + situacao);
            } else if (media > 6 && media < 7.5) {
                situacao = "Em Recuperacao";
                System.out.println("Aluno " + i + " esta " + situacao);
            } else {
                situacao = "Aprovado";
                System.out.println("Aluno " + i + " esta " + situacao);
            }
        }
    }
}