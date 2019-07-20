import java.util.Calendar;
//Tambem podemos utilizar a classe Calendar

class Datas2 {
    public static void main(String[] args) {
        // Inicializar um Calendar com a hora atual
        Calendar agora = Calendar.getInstance();

        // Se exibirmos agora veremos todas informações sobre data e hora atual
        // porém de forma desorganizada
        System.out.println(agora);

        // Podemos pegar algumas informações deste calendario
        int ano = agora.get(Calendar.YEAR);
        int mes = agora.get(Calendar.MONTH); // Começa em 0
        int dia = agora.get(Calendar.DAY_OF_MONTH);
        int diaAno = agora.get(Calendar.DAY_OF_YEAR);
        int diaSemana = agora.get(Calendar.DAY_OF_WEEK);
        int horaAmPm = agora.get(Calendar.HOUR);
        int hora = agora.get(Calendar.HOUR_OF_DAY);
        int minuto = agora.get(Calendar.MINUTE);
        int segundo = agora.get(Calendar.SECOND);

        System.out.println("Ano : " + ano);
        System.out.println("Mes(Comeca em 0) : " + mes);
        System.out.println("Dia Mes : " + dia);
        System.out.println("Dia Ano : " + diaAno);
        System.out.println("Dia Semana : " + diaSemana);
        System.out.println("Horas : " + horaAmPm);
        System.out.println("Horas : " + hora);
        System.out.println("Minutos : " + minuto);
        System.out.println("Segundos : " + segundo);

        // Podemos formatar uma saida de data com printf
        System.out.printf("Hoje é : %02d/%02d/%d horas - %d:%d:%02d", dia, (mes + 1), ano, hora, minuto, segundo);
        System.out.println();

        // Podemos adicionar dias, anos meses, horas etc a data atual através de add

        // Adiciona 1 dia a data
        agora.add(Calendar.DAY_OF_MONTH, 1);
        // Se quisermos subtrair basta passar um numero negativo

        System.out.println("Amanha e dia " + agora.get(Calendar.DAY_OF_MONTH));
    }

}