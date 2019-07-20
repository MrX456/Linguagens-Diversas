import java.util.Date;
import java.text.SimpleDateFormat;

//Para trabalhar com datas temos a classe Date no java
class Datas {

    public static void main(String[] args) {
        // Aqui temos extamante a data e hora atual
        Date data = new Date();
        System.out.println("Data e hora atual " + data);

        // Aqui mostra quantos milissegundos transcorreram de 1 de janeiro de 1970
        System.out.println("Milissegundos desde 1 de janeiro de 1970 : " + data.getTime());

        // Para formatar a data temos a classe SimpleDateFormat

        // Exibir apenas dia/mes/ano
        SimpleDateFormat sim = new SimpleDateFormat("dd/MM/yyyy"); // MM exibe numero do mes(MMMM exibe nome)
        System.out.println(sim.format(data));

        // Exibir hora: min: seg
        SimpleDateFormat sim2 = new SimpleDateFormat("HH:mm:ss");
        System.out.println(sim2.format(data));
    }

}