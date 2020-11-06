//Conceito de variaveis globais e locais
var comida = "pizza"//Aqui temos uma variavel GLOBAL ela é valida em todo código

function pedirComida() {

    document.write(comida + "<br/>");

}
function pedirBebida() {

    var bebida = "suco"//Aqui temos uma variavel LOCAL só funciona dentro da função

    document.write(bebida + "<br/>");
}
pedirComida(); //Estamos usando variavel dentro da função
document.write("Eu quero " + comida + "<br/>")//Estamos usando variavel fora da função
//Como ela é global aparecerá nas duas mensagens

document.write("----------------------------------------" + "<br/>");

pedirBebida(); //Variavel dentro da função
document.write("Eu quero " + bebida + "<br/>")//Estamos usando variavel fora da função
 //Como ela é local não pode ser exibida fora da função. O unico jeito de exibir essa
 //variavel é chamando a função a qual ela foi declarada.

 //OBS: Quando declaramos uma variavel sem a palavra VAR mesmo estando dentro de uma 
 //função ela é considerada como GLOBAL.