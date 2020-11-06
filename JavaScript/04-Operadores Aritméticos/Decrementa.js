//A decrementação de variavel diminui 1 do valor da mesma
//Temos pré e pós decrementação

var x = 1;
var y = 2;

document.write("Variavel Declarada : " +x +"<br/>");
document.write("Pos-decrementação(x--) : " + x-- +"<br/>");
//Variavel permanece com mesmo valor porque decremento foi feito depois de mostra-la
document.write("Decremento agora funcionou : " + x +"<br/>");
document.write("-------------------------------------------" +"<br/>");
document.write("Variavel Declarada : " +y +"<br/>");
document.write("Pré-decrementação(--y) : " + --y +"<br/>");
//Variavel ja recebeu decrementação antes de ser exibida.
