//Operador logico && (and). So retorna true se as todas condições
//testadas forem verdadeiras
var x = 10;
var y = 12;
document.write("x=10  " + "y=12" + "<br/>");
document.write("(x != y) && (x > y)" + "<br/>");
document.write((x != y) && (x > y) + "<br/>");//apenas uma das condiçoes atendidas = false
document.write("(x != y) && (x < y)" + "<br/>");
document.write((x != y) && (x < y) + "<br/>");//duas condições atendidas = true
document.write("-------------------------------------" + "<br/>");

//Operador logico || (or). Retorna true se apenas uma das condições
//forem atendidas. So retorna false se todas forem false.
document.write("x=10  " + "y=12" + "<br/>");
document.write("(x != y) || (x > y)");
document.write((x != y) || (x > y));//apenas uma das condiçoes atendidas = true
document.write("--------");
document.write("(x == y) || (x > y)");
document.write((x == y) || (x > y) + "<br/>");//false porque todas condições são false
document.write("-------------------------------------" + "<br/>");

//Operador logico ! (not). Inverte o valor booleano de um operando
//!true = false e !false = true
//Vamos usar o mesmo exemplo anterior com !
document.write("x=10  " + "y=12" + "<br/>");
document.write("!(x != y) || !(x > y)");
document.write(!(x != y) || (x > y));//false = !true
document.write("--------");
document.write("!(x == y) || !(x > y)");
document.write(!(x == y) || (x > y) + "<br/>");//true = !false
document.write("-------------------------------------" + "<br/>");