//Para criar uma função usamos FUNCTION
//Mesmo sem parametros é necessario utlização de ()
function Mensagem() {
    alert("Parabens");
}
//Vamos criar uma nova função porem com um parametro
function Mensagem2(nome) {
    alert("Parabens " + nome);

}
Mensagem();//Aqui invocamos nossa função para ela funcionar no programa
var a = prompt("Digite seu nome");
Mensagem2(a); //Variavel a ira para o parametro nome da função