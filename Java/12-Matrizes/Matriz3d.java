class Matriz3d {
    public static void main(String args[]) {
        // Podemos usar uma matriz tridimensional em java desta forma
        //Vamos declarar uma matriz 3x3x3

        int[][][] matriz = new int[3][3][3];

        //Vamos preencher esta matriz de forma automatica porem sera preenchida
        //com a soma dos indices desta matriz
        
        for(int i = 0; i < matriz.length; i++) {
            for(int j = 0; j < matriz[i].length; j++) {
                for(int k =0; k < matriz[i][j].length; k++) {
                    matriz[i][j][k] = i + j + k;
                }
            }
        }

        //Vamos exibir esta matriz
        System.out.println("Matriz Tridimensional");

        for(int i = 0; i < matriz.length; i++) {
            for(int j = 0; j < matriz[i].length; j++) {
                for(int k =0; k < matriz[i][j].length; k++) {
                   System.out.print(matriz[k][j][i] +" ");
                }
                System.out.println();
            }
            System.out.println();
        }

        //Soma total da matriz
        int soma = 0;
        int pares = 0;
        int impares = 0;
        for(int i = 0; i < matriz.length; i++) {
            for(int j = 0; j < matriz[i].length; j++) {
                for(int k =0; k < matriz[i][j].length; k++) {
                   soma += matriz[i][j][k];

                   //Se valor for par
                   if(matriz[i][j][k] % 2 == 0) {
                       pares += matriz[i][j][k];
                   }
                   else {
                       impares += matriz[i][j][k];
                   }
                }
            }
        }
        System.out.println("Soma total = " +soma);
        System.out.println("Soma pares = " +pares);
        System.out.println("Soma impares = " +impares);

    }
}