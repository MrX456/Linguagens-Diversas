#include <stdio.h>
#define size 100

void ola(char *nome) {
    printf("Ola %s", nome);
}

int main()
{
    char nome[size];
    printf("Digite seu nome :\n");
    scanf("%s", nome); //para strings usamos %s sem utilizar o caracter &
    //scanf le apenas UMA PALAVRA(tudo que vem depois de ESPAÇO é ignorado)
    ola(nome);
    
}
