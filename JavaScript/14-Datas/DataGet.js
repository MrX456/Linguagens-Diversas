//Método GET em Date pode ser usado para exibir parte da data
//(sem os segundos ou fuso-horario por exemplo)
//Vetor com os meses.
var Meses = ["JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"];

var hoje = new Date();//Data e hora atuais
var novadata = new Date(2006, 11, 21)//21/12/2006(mes começa em 0 caso retorne 2 consideramos mes 3 ou seja março)
var milissegundos = new Date(1488569383588);//Milissegundos depois de 01\01\1970 = 2017
var dataString = new Date("2006/11/21"); // Data em string = 21/11/2006

//Exibindo os valores:
document.write("Mes :  ", hoje.getMonth(), "<br/>");//Janeiro é 0
document.write("Ano :  ", hoje.getFullYear(), "<br/>");
document.write("Dia do Mes :  ", hoje.getDate(), "<br/>");
document.write("Dia da Semana :  ", hoje.getDay(), "<br/>");//Domingo é zero; Sabado 6
document.write("Hora :  ", hoje.getHours(), "<br/>");
document.write("Minuto :  ", hoje.getMinutes(), "<br/>");
document.write("Segundo :  ", hoje.getSeconds(), "<br/>")
document.write("Milissegundos desde 01/01/1970 :  ", hoje.getTime(), "<br/>");;//Aqui se encerra horario atual do sistema(obj hoje)

document.write("Ano (obtido a partir dos milissegundos) :  ", milissegundos.getFullYear(), "<br/>");//obj milissegundos que retorna valores em milissegundos(retornara o ano equivalente ao valor declarado)

document.write("Data atribuida na criação do Objeto :  ", novadata.getDate(), " de ", Meses[novadata.getMonth()], " de ", novadata.getFullYear(), "<br/>");//obj novadata(foi atribuida uma data) exibe o dia do mes dessa data (começa em 0 mas usamos o vetor criado com os nomes dos meses ao inves do valor numerico) e tambem o ano

document.write("Data passada por String :  ", dataString.getDate(), " de ", Meses[dataString.getMonth()], " de ", dataString.getFullYear(), "<br/>");//Aqui começa a data que foi passada por string(usamos vetor Meses)
document.write("Data passada por String :  ", dataString.getDate(), " de ", dataString.getMonth(), " de ", dataString.getFullYear(), "<br/>");//Sem vetor Meses(valor numérico no mes)

document.write("Data passada por String em milissegundos :  ", dataString.getTime());
          //Retornara data da string em milissegundos