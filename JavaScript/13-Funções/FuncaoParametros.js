//Criaremos uma função com dois parametros agora
var V = prompt("Entre com a tensão");
var R = prompt("Entre com a resistência");

function calculaCorrente(V, R) {//Parametros necessarios
    var I = V / R;
    return I;//Essa função retorna um valor

}
var corrente = calculaCorrente(V, R);
document.write("O valor da corrente é " + corrente + " a");