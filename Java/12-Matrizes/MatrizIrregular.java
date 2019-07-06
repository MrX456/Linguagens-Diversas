class MatrizIrregular {
    public static void main(String args[]) {
        // Uma matriz irregular pode ser declarada desta forma
        String[][] irregular = new String[3][]; //Colunas são variaveis

        irregular[0] = new String[1]; //Esta linha possui 1 coluna
        irregular[0][0] = "Marcia";

        irregular[1] = new String[2]; //Esta linha possui 2 colunas
        irregular[1][0] = "Paula";
        irregular[1][1] = "Daniela";

        irregular[2] = new String[3]; //Esta linha possui 3 colunas
        irregular[2][0] = "Maria";
        irregular[2][1] = "Pamela";
        irregular[2][2] = "Gabriela";

        //para exibir esta matriz
        for(int i = 0; i < irregular.length; i++) {
            for(int j = 0; j < irregular[i].length; j++) {
                System.out.print(irregular[i][j] +" ");
            }
            System.out.println();
        }
    }
}