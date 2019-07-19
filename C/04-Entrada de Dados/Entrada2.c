#include<stdio.h>

int main(void)
{
   //Podemos receber multiplos dados com apenas 1 scanf()
   float x;
   float y;

   printf("Digite dois numeros decimais : ");
   scanf("%f %f", &x, &y);

   //Retornando numeros digitados
   printf("%.2f \n",x);
   printf("%.2f \n",y);
   return 0;
}
