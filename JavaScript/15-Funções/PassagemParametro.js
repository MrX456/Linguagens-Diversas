//Este codigo da uma ideia sobre passagem de parametro
//por valores e por referencia
function valorReferencia(strVar, arrVar) {
    strVar = "string modificada";
    arrVar[0] = "Array modificado";
}
var texto = "valor original";
var vetor = ["Valor original"];
document.write("String antes de chamar a função " + texto + "<br/>");
document.write("Array antes de chamar a função " + vetor[0] + "<br/>");
//Chamndo a função
valorReferencia(texto, vetor);
document.write("String apos chamar a função " + texto + "<br/>");
//Passando por valor não havera alteração da variavel texto que esta fora da função
document.write("Array apos chamar a função " + vetor[0] + "<br/>");
        //Passando por referencia o array que esta fora da função sofrera mesmas alterações da função