//Para verificar o tamanho de um vetor(Quantos elementos o compoem) podemos usar
//o seguinte comando(LENGHT)
var i;
var Paises = ["Brasil", "Italia", "Alemanha", "Argentina"];
var QuantPaises = Paises.length;//Criamos variavel que recebera comprimento do vetor
document.write(QuantPaises + "<br/>")//Exibira tamanho do vetor
for (i = 0; i < 4; i++) {
    document.write(Paises[i] + "  " + "<br/>");
}
document.write("------------------------" + "<br/>");


//Podemos acrescentar elementos ao nosso vetor usando PUSH
//Precisamos utilizar o length pois i ira iterar ate o novo
//comprimento do vetor(era 3 agora é 5[posições])
//Sem o length a iteração terminaria no comprimento inicial(3)
//não exibindo os novos elementos
Paises.push("França");
Paises.push("Inglatera");
for (i = 0; i < Paises.length; i++) {
    document.write(Paises[i] + "  " + "<br/>");
}
document.write("------------------------" + "<br/>");


//Tambem podemos remover elementos de um vetor usando POP
//Será removido o elemento que esta na ultima posição
//Para exibir o ultimo elemento de um vetor usamos:
document.write(Paises[Paises.length - 1] + "<br/>");
//Como esse vetor possui 6 elementos para exibir apenas o ultimo usamos length -1
//porque nosso primeiro elemento começa na posição [0] e o ultimo esta na posição [5]
Paises.pop();
//Como eliminamos (Inglaterra) agora ao escrever o ultimo elemento
//sera exibido o anterior que passa a ser França
document.write(Paises[Paises.length - 1] + "<br/>");
document.write("------------------------" + "<br/>");
for (i = 0; i < Paises.length; i++) {
    document.write(Paises[i] + "<br/>");
}
document.write("------------------------" + "<br/>");


//Podemos unir elementos de um vetor usando JOIN
//Todos elementos serão unidos em uma unica variavel
var ConjuntoPaises = Paises.join(", ")//temos uma string separadora
document.write(ConjuntoPaises + "<br/>"); //variavel recebeu todos elementos do vetor
document.write("------------------------" + "<br/>");


//Tambem podemos eliminar o primeiro elemento de um vetor usando SHIFT
//como consequencia cada elemento seguinte ira para posição anterior
Paises.push("Holanda");
document.write("Antes do shift" + "<br/>");
for (i = 0; i < Paises.length; i++) {
    document.write(Paises[i] + "<br/>");
}
document.write("Primeiro elemento:" + Paises[0] + "<br/>");
//Agora a eliminação
Paises.shift();
document.write("Apos Shift" + "<br/>");
for (i = 0; i < Paises.length; i++) {
    document.write(Paises[i] + "<br/>");
}
document.write("Primeiro elemento:" + Paises[0] + "<br/>");
document.write("------------------------" + "<br/>");


//Podemos tambem deletar um elemento de um vetor atraves do metodo DELETE 
//porem ele não diminui o tamanho do vetor, apenas remove o elemento 
//deixando sua posição vazia(Undefined)
delete Paises[2];
//Excluimos Argentina
for (i = 0; i < Paises.length; i++) {
    document.write(Paises[i] + "<br/>");
}
document.write("------------------------" + "<br/>");
//Agora a posição que guaradava Argentina
// esta como "undefined"


//Podemos adicionar um elemento a partir de uma posição especifica
//com SPLICE
document.write("Composição atual" + "<br/>");
for (i = 0; i < Paises.length; i++) {
    document.write(Paises[i] + "<br/>");
}
Paises.splice(1, 0, "Brasil", "Espanha");
//Desse modo o elemento da posição [0] permenece no seu lugar
//o elemento da posição [1] sera deslocado para a proxima posição
//depois dos novos elementos inseridos
document.write("Nova Composição" + "<br/>");
for (i = 0; i < Paises.length; i++) {
    document.write(Paises[i] + "<br/>");
}
document.write("------------------------" + "<br/>");


//Podemos remover elementos com splice tambem
//dessa forma sem deixar elementos indefinidos
//Vamos eliminar o elemento indefinido anterior
document.write("Composição atual" + "<br/>");
for (i = 0; i < Paises.length; i++) {
    document.write(Paises[i] + "<br/>");
}
Paises.splice(4, 5, "Croacia", "Portugal");//eliminar elementos da posição 4 5 e 6
//Vamos acrecentar mais 2 paises nas posições 4 e 5
document.write("Nova Composição" + "<br/>");
for (i = 0; i < Paises.length; i++) {
    document.write(Paises[i] + "<br/>");
}
document.write("------------------------" + "<br/>");



