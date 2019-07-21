#include<stdio.h>

int main(void)
{
    //tabela ascII usando for
    for(int i = 0; i <= 255; i++) {
        printf("%d = %c \n",i, i);
    }

    return 0;
}
