function bubbleSort(vetor) {

    var tamanho = vetor.length;
    var comparacao = 0;
    var trocas = 0;

    for (var i = tamanho - 1; i >= 1; i--) {

        for (var j = 0; j < i; j++) {

            comparacao++;

            if (vetor[j] > vetor[j + 1]) {

                var aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                trocas++;

            }

        }

    }

    return vetor;

}

var vet = [4, 2, 1, 8, 3];

document.write("Vetor original" + "<br/>");

//Exibindo vetor original
for (var i = 0; i < vet.length; i++) {
    document.write(vet[i] + " ");
}

document.write("<br/>");

//Ordenando com bubblesort

document.write("Pós BubbleSort" + "<br/>");
var ord = bubbleSort(vet);

for (var i = 0; i < ord.length; i++) {
    document.write(ord[i] + " ");
}