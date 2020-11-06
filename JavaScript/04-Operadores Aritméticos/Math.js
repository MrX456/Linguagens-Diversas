//Vamos usar o objeto Math que permite fazermos algumas operções matematicas
//mais complexas. Ele é um objeto estatico, ou seja, não precisa ser instanciado
//para utilizar basta usar Math.operaçãodesejada.
document.write("Logaritmo Natural de 10 = " + Math.LN10 + "<br/>");
document.write("Valor de PI = " + Math.PI + "<br/>");
document.write("Raiz Quadrada de 2 = " + Math.SQRT2 + "<br/>");
document.write("--------------------------------------------------------------" + "<br/>");

//Métodos = Funções matematicas com parametros(alguns não precisam)
//Exemplos de aplicações
var a = 2.56;
var x = 4;
var y = 3;
document.write("Exemplos de métodos Math" + "<br/>");
document.write("a =" + a + "<br/>");
document.write("x =" + x + "<br/>");
document.write("y =" + y + "<br/>");
document.write("Arredondamento Decimal de " + a + " : " + Math.ceil(a) + "<br/>");
document.write("X elevado a Y :  " + Math.pow(x, y) + "<br/>");//4^3
document.write("O menor dos valores é " + Math.min(a, x, y) + "<br/>");
document.write("Valor aleatório entre 0 e 1 :  " + Math.random() + "<br/>");
document.write("Valor aleatório entre 0 e 10 :  " + Math.random() * 10 + "<br/>");
          //Existem outros métodos dentro de Math