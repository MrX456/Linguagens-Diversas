class Excecoes5 {
    public static void main(String[] args) {
   
       //Podemos capturar multiplas exceções com apenas 1 catch
       int[] num = {2, 4, 8, 16, 32, 64};
       int[] div = {2, 0, 4, 8, 0};

       
       for(int i = 0; i < num.length; i++) {
           try {
               System.out.println(num[i] + "/" + div[i] + " = " + (num[i] / div[i]));
           }
          
        //Exceções devem ser da mesma familia
           catch(ArithmeticException | ArrayIndexOutOfBoundsException ex){
               System.out.println("Ocorreu um erro!");
           }
       }
   }
}