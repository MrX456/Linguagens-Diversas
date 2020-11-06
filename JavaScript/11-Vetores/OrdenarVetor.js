//Usando SORT podemos ordenar alfabeticamente um vetor
//Não se aplica a valores numericos
var Paises = ["Portugal", "Espanha", "Brasil", "Alemanha", "Inglaterra"];
var i;
Paises.sort();
for (i=0; i<Paises.length; i++) {
    document.write(Paises[i] +"<br/>");
}
document.write("-----------------------" +"<br/>");


//Para ordenar numericamente um vetor temos que usar funções
var Valores = [2,33,15,7,24,44,36,18];

function ordenaVetor(a,b) {
   // return a>b?1: a<b?-1:0; ou então
    return a - b;
}
Valores.sort(ordenaVetor);
for (i=0; i<Valores.length; i++) {
    document.write(Valores[i] +"  ");
}
document.write("<br/>-----------------------" +"<br/>");


//Podemos ordenar nossos vetores de forma reversa de posições(não por ordem alfabetica)
//começando pelo elemento da ultima posição até o primeiro (REVERSE)
//Vamos usar o vetor Paises para isso
document.write("Ordem por Posição" +"<br/>");//Como usamos o sort anteriormente ja esta em ordem alfabetica
for (i=0; i<Paises.length; i++) {
    document.write(Paises[i] +"<br/>");
}
document.write("Ordem reversa" +"<br/>");
Paises.reverse(); //Posições reversas (Usamos sort anteriormente ja esta em ordem alfabetica)
for (i=0; i<Paises.length; i++) {
    document.write(Paises[i] +"<br/>");
}
document.write("-----------------------" +"<br/>");


//Ja para valores numericos aplicamos
//Ja ordenamos por ordem numerica anteriormente
document.write("Ordenação Reversa" +"<br/>");
function ordenaVetorRev (a,b) {
    return b - a;
}
Valores.reverse();
for (i=0; i<Valores.length; i++) {
   document.write(Valores[i] +"  ");
}


