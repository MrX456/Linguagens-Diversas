//Alert exibe uma mensagem,string,ou variavel em uma janela de popup
//Dentro de uma mensagem representa quebra de linha \n
var msg = "popup";
alert("Isto é um " +msg);
var x = 2;
alert("Valor \ndefinido " +x);

//Prompt é utilizado para entrada de dados do usuario
var nome = prompt("Digite seu nome");
alert("Seja bem vindo " +nome);

/* Confirm é utilizado para exibir uma caixa de dialogo que depende de confirmação 
(Tera um botão OK e outro CANCELAR) do tipo logico(true(ok) ou false(cancelar))*/
var mensagem;
var retorno = confirm("Clique em um dos botões");
if (retorno == true) { //Usuario clicou em OK
    mensagem = "Operação Confirmada";
}
else //Usuario clicou em CANCELAR   
{
    mensagem = "Você cancelou a operação";
}
document.write(mensagem); //Sera exibido o valor da mensagem dependendo da ação do usuario

//Document.Write escreve uma uma mensagem,string,ou variavel no documento html sobrescrevendo
//seu conteudo
