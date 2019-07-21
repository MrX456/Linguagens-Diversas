
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.Duration;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.util.Date;
import java.util.concurrent.TimeUnit;
import java.time.Period;
import java.time.temporal.ChronoUnit;


public class DiferencaDatas {
    
    //Vamos criar um método para calcular diferença entre datas com Date
    public static void diferencaDataDate() throws ParseException {
        
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        Date data1 = sdf.parse("01/01/2019");//Pode gerar exceção
        Date data2 = sdf.parse("01/02/2019");
        
        System.out.println("Data 1: " + data1);
        System.out.println("Data 2: " + data2);
        
        //Vamos verificar a diferença entre as datas instanciadas
        //valor será em milissegundos
        long difMil = Math.abs(data2.getTime() - data1.getTime());
        
        //Se quisermos a diferença de dias
        long difDias = TimeUnit.DAYS.convert(difMil, TimeUnit.MILLISECONDS);
        System.out.println(difDias);
    }
    
    //Este método utiliza classe que estão presentes comente a partir do java 8
    //e é mais simples
    public static void diferencaData2() {
        LocalDate data1 = LocalDate.of(2019, 01, 01);
        LocalDate data2 = LocalDate.of(2019, 02, 01);
        
        Period periodo = Period.between(data1, data2);
        //Em dias, meses e anos
        int dias = periodo.getDays();
        int meses = periodo.getMonths();
        int anos = periodo.getYears();
        
        System.out.println("Dias: " + dias);
        System.out.println("Meses: " + meses);
        System.out.println("Anos: " + anos);
    }
    
    //Este método mostra a diferença com o tempo a partir do java 8
    public static void diferencaComTempo() {
        LocalDateTime data1 = LocalDateTime.of(2019, 1, 1, 6, 30);
        LocalDateTime data2 = LocalDateTime.of(2019, 1, 1, 8, 30);
        
        //Vamos verificar a diferença somente entre horas
        Duration duracao = Duration.between(data1, data2);
        long dif = duracao.toHours();
        
        System.out.println("Diferença em horas: " + dif);
    }
    
    //Este método tambem só funciona a partir do java 8 e utiliza ChronoUnit
    public static void diferencaComTempoChrono() {
        LocalDateTime data1 = LocalDateTime.of(2019, 1, 1, 6, 30);
        LocalDateTime data2 = LocalDateTime.of(2019, 1, 1, 8, 30);
        
        //Agora vamos pegar a diferença
        long  horas = ChronoUnit.HOURS.between(data1, data2);
        long dias = ChronoUnit.DAYS.between(data1, data2);
        
        System.out.println("Horas : " + horas);
        System.out.println("Dias : " + dias);
    }
    
    
    //Método principal
    public static void main(String[] args) {
        System.out.println("Difereca entre datas(dias)");
        try {
            //Vamos chamar método
            diferencaDataDate();
        } catch (ParseException ex) {
           ex.printStackTrace();
        }
        
        System.out.println("-------------------------------");
        
        //Outro método
        diferencaData2();
        
        System.out.println("-------------------------------");
        
        //Método de horas
        diferencaComTempo();
        
         System.out.println("-------------------------------");
         
         //Com ChronoUnit
         System.out.println("ChronoUnit");
         diferencaComTempoChrono();
    }
}
