//Operadores Relacionais
var a = 5;
var b = 3;
var c = "5";
//Operador == verifica se variaveis são iguais
document.write(a +" = " +b +"  ");
document.write (a == b);//false
document.write("<br/>");

//Operador < verifica se primeira variavel é menor que a segunda
//Tambem temos <= para menor ou igual
document.write(a +" < " +b +"  ");
document.write (a < b );//false
document.write("<br/>");

//Operador > verifica se primeira variavel é maior que a segunda
//Tambem temos >= para maior ou igual
document.write(a +" > " +b +"  ");
document.write (a > b );//true
document.write("<br/>");

//Operador === funciona igual == porem leva em conta os tipos de dados
//Vamos usar uma string e um numero para esta comparação
document.write(a +" ===  " +"5" +"  ");
document.write (a === c);//false porque um e numero e o outro string
document.write("<br/>");

//Operador != verifica se variaveis são diferentes
document.write(a +" != " +b +"  ");
document.write (a != b );//true
document.write("<br/>");

//Operador !== funciona igual != porem leva em conta os tipos de dados
//Vamos usar uma string e um numero para esta comparação
document.write(a +" !==  " +"5" +"  ");
document.write (a !== c);//true porque os tipos de dados ja são diferentes
document.write("<br/>");