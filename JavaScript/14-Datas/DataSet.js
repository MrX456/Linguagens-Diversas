//Manipulando objeto Date com SET
//Permite configurar datas
var mes = ["JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"];
var semana = ["domingo", "segunda", "terça", "quarta", "quinta", "sexta", "sabado"];

var hoje = new Date(); //Data e hora atuais

//Exibindo valores atuais de data e hora
document.write("Dia do mes :  ", hoje.getDate(), "<br/>");
document.write("Mes :  ", mes[hoje.getMonth()], "<br/>");
document.write("Ano :  ", hoje.getFullYear(), "<br/>");
document.write("Dia da Semana : ", semana[hoje.getDay()], "<br/>");
document.write("Hora :  ", hoje.getHours(), "<br/>");
document.write("Minutos :  ", hoje.getMinutes(), "<br/>");
document.write("Segundos :  ", hoje.getSeconds(), "<br/>");

//Função que permite alterar data(nesse caso dia mes e ano)
//alterações serão feitas no obj hoje
function alteraData() {
    hoje.setDate(document.getElementById("dia").value);//argumentos de setdate
    hoje.setMonth(document.getElementById("mes").value - 1);
    hoje.setFullYear(document.getElementById("ano").value);
    alert("Data : " + semana[hoje.getDay()] + ",  " + hoje.getDate() + " de " + mes[hoje.getMonth()]);
    //Vamos criar um formulario html comum para auxiliar nas alterações
    //Podemos alterar qualquer outro parametro da data usando o metodo
    //set apropriado
}