class Matriz2 {
    public static void main(String args[]) {
        //Tambem podemos declarar e ja preencher a matriz
        int[][] matriz = {{1, 4},{2, 1}};

        //Para exibir a matriz em forma de tabela precisamos de duas estruturas de repetição
        for(int i = 0; i < matriz.length; i++) { //Varre linhas
            for(int j = 0; j < matriz[i].length; j++) { //Varre colunas
                System.out.print(matriz[i][j] +" ");
            }
            System.out.println();
        }
    }
}