alert("BEBIDAS SHABAZZ");
var escolha = prompt("O que deseja comprar ---" + "[Agua] / [Cerveja] / [Refrigerante]");
switch (escolha) {
    case "Agua":
        alert("Valor total R$ 2,50");
        break;

    case "Cerveja":
        alert("Valor total R$ 4,00");
        break;

    case "Refrigerante":
        alert("Valor total R$ 3,50");
        break;

    default:
        alert("Produto Invalido");