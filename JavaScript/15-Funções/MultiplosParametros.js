//Vamos utilizar multiplos parametros em uma função
function Mensagem(nome, sobrenome, idade) {
    alert("Parabens " + nome + " " + sobrenome + "  " + "Voce tem " + idade + " anos");
}
var a = prompt("Digite seu nome");
var b = prompt("Digite seu sobrenome");
var c = prompt("Digite sua idade");
//Chamando função
Mensagem(a, b, c);