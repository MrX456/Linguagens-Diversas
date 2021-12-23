#include <stdio.h>
#define size 100

int main()
{
    //
    char nome[size];

    while(1) {//laço infinito
        puts("Digite um nome ou aperte ENTER para encerrar : ");
        gets(nome);

        //Caracter de encerramento de string \0
        if(nome[0] == '\0')
            break;
        else
            printf("Nome introduzido : %s\n", nome);
    }
    return 0;
}
