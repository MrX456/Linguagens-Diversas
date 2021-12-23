#include <stdio.h>
#define size 100

void ola(char *nome) {
    printf("Ola %s", nome);
}

int main()
{
    char nomeCompleto[size];
    printf("Digite seu nome completo:\n");
    //a função gets() permite receber tudo que foi digitado pelo usuario
    //incluindo o que vem depois de ESPAÇO
    gets(nomeCompleto);
    ola(nomeCompleto);
    return 0 ;
}
