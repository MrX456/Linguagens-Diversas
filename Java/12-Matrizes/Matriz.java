class Matriz {
    public static void main(String args[]) {
        //Matrizes são arrays de duas dimensões. Ideal para exibir tabelas.
        //para declarar uma matriz em java usamos

        int[][] matriz = new int[2][2]; //Temos uma matriz 2x2

        //Para prencher a matriz
        matriz[0][0] = 1;
        matriz[0][1] = 5;
        matriz[1][0] = 2;
        matriz[1][1] = 0;

        //Para exibir a matriz em forma de tabela precisamos de duas estruturas de repetição
        for(int i = 0; i < matriz.length; i++) { //Varre linhas
            for(int j = 0; j < matriz[i].length; j++) { //Varre colunas
                System.out.print(matriz[i][j] +" ");
            }
            System.out.println();
        }
    }
}