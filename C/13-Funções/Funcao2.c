#include <stdio.h>

//Ja esta função soma dois valores e retorna um inteiro. Tambem precisaremos de parâmetros
//(numeros para fazer esta soma)
int soma(int a, int b)
{
    int c; //Qualquer variavel declarada dentro de uma função possui escopo local e não pode ser utilizada fora dela
    c = a + b;
    //Return indica que estamos retornando algo ao chamador
    return c;
}

int main()
{
    int result;

    //Ao chamar função cridada devemos passar os dois números a serem somados, como teremos
    //um retorno podemos armazená-lo em uma variavel para exibir depois

    result = soma(3, 8);

    printf("Resultado: %d\n", result);
}

