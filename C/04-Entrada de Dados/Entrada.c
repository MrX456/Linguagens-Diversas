#include<stdio.h>

int main(void)
{
    //Para recebermos dados digitados pelo usuario usamos função scanf
    //|Vamos pedir para o usuario digitar um numero e mostra-lo
    int numero;

    printf("Digite um numero : ");
    //Numero inteiro usamos %d
    scanf("%d",&numero);
    //Vai armazenar o numero digitado na variavel declarada(não esquecer &)

    //Agora vamos mostrar
    printf("%d" , numero);
    return 0;
}
