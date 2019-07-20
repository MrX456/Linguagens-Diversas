#include<stdio.h>

int main(void)
{
    //Também podemos fazer uma decrementação
    int contador = 10;

    while(contador >= 0) {
        printf("%d ", contador);
        contador--;
    }
    return 0;
}
