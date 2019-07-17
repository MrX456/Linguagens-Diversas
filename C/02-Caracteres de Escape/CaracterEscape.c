#include<stdio.h>

int main(void)
{
    //Temos alguns caracteres de escape em c, todos começam com \ e devem estar dentro de aspas

    //quebrar lina \n
    printf("Quebra \nlinha");
    printf("\n");

    //tabulação \t
    printf("1 \t2 \t3 \t4");
    printf("\n");

    //mostrar aspa simples \'
    printf("\'1\'");
    printf("\n");

    //mostrar aspas duplas \"
    printf("\"1\"");
    printf("\n");

    /*mostrar contra barra \\ */
    printf("1098\\35");
    printf("\n");

    //retorno do cursor (carriage return) \r
    printf("123 \r 456");
    printf("\n");

    return 0;
}
