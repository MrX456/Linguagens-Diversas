function shellSort(vetor) {

    var h = vetor.length / 2;

    while (h > 0) {

        for (i = h; i < vetor.length; i++) {

            var j = i;
            var c = vetor[i];

            while (j >= h && vetor[j - h] > c) {
                vetor[j] = vetor[j - h];
                j = j - h;
            }

            vetor[j] = c;

        }

        if (h == 2) {
            h = 1;
        } else {
            h = parseInt(h * 5 / 11);
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

//Ordenando com shellsort

document.write("Pós ShellSort" + "<br/>");
var ord = shellSort(vet);

for (var i = 0; i < ord.length; i++) {
    document.write(ord[i] + " ");
}