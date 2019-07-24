#include<stdio.h>

int main(void)
{
    //Tambem podemos usar o switch case com o tipo char
    char letra;

    printf("a , b, c ou d \n");
    printf("Escolha uma letra para ver uma fruta que comeca com a letra escolhida: \n");
    scanf("%c",&letra);

    switch (letra) {
        case 'a' :
            printf("abacaxi \n");
            break;
        case 'b' :
            printf("banana \n");
            break;
        case 'c' :
            printf("caqui \n");
            break;
        case 'd' :
            printf("damasco \n");
            break;
        default :
            printf("Letra invalida");
            break;
    }

    return 0;
}
