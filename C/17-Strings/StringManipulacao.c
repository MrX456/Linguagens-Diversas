#include <stdio.h>
#include <string.h> //Biblioteca contendo métodos para manipulção de strings
#define size 100

int main()
{
    char string[size];
    puts("Digite uma string :");
    gets(string);

    //Mostra o tamanho de uma string
    int len = strlen(string);
    printf("Tamanho da string : %u \n", len);

    //Copia uma string
    char copia[size];
    strcpy(copia, string);
    printf("String copiada : %s\n", copia);

    //Concatena(junta) strings
    printf("Concatenar : %s\n", strcat(string, "CONCATENADO"));

    return 0;
}
