//Uso do condicional switch case (escolha caso)
var farol = prompt("Digite a cor do farol[vermelho] [amarelo] [verde]");

switch (farol) {
    case "vermelho":
        document.write("Pare!");
        break;

    case "amarelo":
        document.write("Atenção");
        break;

    case "verde":
        document.write("Siga");
        break;

    default:
        document.write("Cor invalida");