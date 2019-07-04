class Arredondamento {
    public static void main(String[] args) {
        // Math possui alguns métodos para arredondar numeros de ponto flutuante
        double x = 2.8;

        // Typecast (int) para mostrar somente parte inteira
        System.out.println((int) Math.floor(x)); // Para baixo
        System.out.println((int) Math.ceil(x)); // Para cima
        System.out.println((int) Math.round(x)); // Menor que .5 para baixo, maior para cima
    }
}