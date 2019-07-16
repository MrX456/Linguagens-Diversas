class Excecoes2 {
    public static void main(String[] args) {
        // Vetores tambem podem ocasionar excecoes
        // Este vetor possui 4 elementos
        int[] num = new int[4];

        // Este indice excede o tamanho do vetor causando uma exceção
        try {
            num[4] = 1;
        }

        // Podemos ser mais especificos e capturar o tipo de execeção que pode ser
        // causada(existem varios tipos)
        catch (ArrayIndexOutOfBoundsException ex) {
            System.out.println("Indice excede o tamanho do vetor");
        }
    }
}