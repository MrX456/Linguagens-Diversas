import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.temporal.ChronoUnit;


public class Datas6 {
   
    public static void main(String[] args) {
        //A partir do java 8 temos métodos mais simples de trabalhar com datas
    
        //Classe LocalDate
        //dd MM yyyy
        LocalDate agora = LocalDate.now();
        System.out.println(agora);
        
        //Podemos definir uma data qualquer
        System.out.println(LocalDate.of(2006, 4, 25));
        
        //Assim como podemos converter uma String para data
        System.out.println(LocalDate.parse("2008-02-01"));
        //Obs: Caso a String passada não possa ser convertida será retornada uma exceção
        //portanto é recomendavel trata-la
        
        //Para adicionar ou diminuir dias, anos, semanas, etc...
        System.out.println("Data daqui a 30 dias");
        System.out.println(agora.plusDays(30));
        //Para voltar podemos usar método minus
        System.out.println("Um mes atras");
        System.out.println(agora.minus(1, ChronoUnit.MONTHS));
        
        //Retorna o dia da semana mes e ano
        System.out.println("Semana :" + agora.getDayOfWeek());
        System.out.println("Mes :" + agora.getDayOfMonth());
        System.out.println("Ano :" + agora.getDayOfYear());
        
        //Verifica se ano é bissexto
        System.out.println("Este ano e bissexto ? " + agora.isLeapYear());
        
        //Para manipulação de tempo temos a classe LocalTime
        LocalTime hora = LocalTime.now();
        System.out.println("Classe LocalTime");
        System.out.println(hora);
        
        //Podemos instanciar um horario qualquer
        System.out.println(LocalTime.of(11, 45));
        //Podemos converter String
        System.out.println(LocalTime.parse("13:25"));
        
        //Podemos adiconar ou remover tempo de um horario
        System.out.println("Daqui a 60 minutos: " + hora.plusMinutes(60));
        System.out.println("A 40 minutos atras: " + hora.minus(40, ChronoUnit.MINUTES));
        
        //Pegar somente hora
        System.out.println("Hora: " + hora.getHour());
        //Minuto
        System.out.println("Minuto: " + hora.getMinute());
        
        //Data e hora completa
        LocalDateTime completo = LocalDateTime.now();
        System.out.println(completo);
        
        //Instanciação de data e hora qualquer
        System.out.println(LocalDateTime.of(2014, 2, 16, 21, 30));
        //Converter String
        System.out.println(LocalDateTime.parse("2015-03-19T11:30"));
        
        //Adicionar 3 anos na data(podemos adicionar qualquer outra medida de tempo)
        System.out.println("Daqui a 3 anos: " + completo.plusYears(3));
    
    }
    
   
}