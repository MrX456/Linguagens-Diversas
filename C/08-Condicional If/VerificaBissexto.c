#include<stdio.h>

int main(void)
{
    //Verificar se um ano é bissexto
    int ano;

    printf("Digite um ano para verificar se é bissexto : \n");
    scanf("%d",&ano);

    //Tambem podemos usar os operadores lógicos nos testes
    if((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d e um ano bissexto",ano);
    }
    else {
        printf("O ano %d nao e um ano bissexto",ano);
    }
    return 0;
}
