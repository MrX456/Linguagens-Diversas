class Excecoes6 {
    public static void main(String[] args) {
        //No tratamento de exceções o bloco finally é opcional
        int x = 7;
        int y = 0;
        
        try {
            System.out.println(x / y);
        }
        catch(Exception ex){
            System.out.println("Impossivel dividir por 0");
        }
        //O finally sempre é executado independentemente de executar try ou catch
        finally {
            System.out.println("Encerrando programa...");
        }
    }
}