class Excecoes3 {
    
    public static void main(String[] args) {
    
        //Podemos capturar multiplas exceções em um programa
        int[] num = {2, 4, 8, 16, 32, 64};
        int[] div = {2, 0, 4, 8, 0};

        //Aqui teremos duas exceções simultaneas
        //Divisão por zero e indice excedendo tamanho do vetor, devemos trata-las
        for(int i = 0; i < num.length; i++) {
            try {
                System.out.println(num[i] + "/" + div[i] + " = " + (num[i] / div[i]));
            }
            //Divisão por 0
            catch(ArithmeticException ex1){
                System.out.println("Impossivel dividir por 0");
            }
            //Indice maior que o tamanho do vetor
            catch(ArrayIndexOutOfBoundsException ex2) {
                System.out.println("Indice excede o tamanho do vetor");
            }
        }
        /*Obs: Caso usassemos apenas Exception as duas exceções seriam capturadas
        porém apenas um tratamento poderia ser feito*/
    }
}