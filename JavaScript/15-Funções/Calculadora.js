//Criação de funções em JavaScript
//Vamos criar uma função que faz soma de valores(precisamos passar parametros para fazer a soma)
function soma(a, b) {
    //alert(a+b);
    return a + b;
}
//Vamos criar uma função para subtração
function subtracao(a, b) {
    return a - b;
}
//Função multiplicar
function multi(a, b) {
    return a * b;
}
//Função divisão
function div(a, b) {
    return a / b;
}
//Valores(parametros) que serão somados atraves da função soma (a,b)
alert("3+5 " + soma(3, 5));
//Sera exibido um popup com o valor da soma (8)
alert("3-5 " + subtracao(3, 5));
//Sera exibido popup com valor subtração(-2)
alert("3x5 " + multi(3, 5));
//Sera exibido popup com valor multiplicação(15)
alert("6/2 " + div(6, 2));
       //Sera exibido popup com valor divisão(3)