class Excecoes4 {
    
    public static void main(String[] args) {
         //Tambem podemos usar a classe Throwable para exceções gerais, mas isto não é uma boa pratica
         int[] num = new int[4];
         
         try {
             num[4] = 3;
         }
         catch(Throwable ex) {
             System.out.println("Indice fora dos limites do vetor");
         }
    }
    
}
