#include<stdio.h>
#include<math.h>

int main(void)
{
    //Pedir os coeficientes de uma equação de grau 2 e encontrar raizes
    float a,b,c,
          delta,
          raizDelta,
          raiz1, raiz2;

          printf("Dada a equacao de segundo grau ax^2 + bx + c = 0 \n");
          printf("Digite o valor do coeficiente a : ");
          scanf("%f",&a);

          fflush(stdin);

          printf("Digite o valor do coeficiente b : ");
          scanf("%f",&b);

          fflush(stdin);

          printf("Digite o valor do coeficiente c : ");
          scanf("%f",&c);

          //Vamos verificar validade da equação(coeficientes 0 não são permitidos)
          if(a != 0) {
            //Fórmula do delta
            delta = (b*b) - (4*a*c);
            raizDelta = sqrt(delta);

            //Vamos verificar raiz do delta(este if só é execuatdo se o if de cima for executado primeiro)
            if(delta >= 0) {
                raiz1 = (-b + raizDelta) / (2*a);
                raiz2 = (-b - raizDelta) / (2*a);
                //Vamos retornar as raizes
                printf("Raizes da equação %.0fx^2 + %.0fx + %.0f = 0 \n", a,b,c);
                printf("x\' = %.2f e x\" = %.2f \n",raiz1,raiz2);
            }
            //Raiz delta negativa(numeros complexos)
            else {
                delta = - delta;
                raizDelta = sqrt(delta);
                printf("Raizes da equação %dx^2 + %dx + %d = 0 \n", a,b,c);
                printf("x\' = %.2f + i%.2f \n",(-b)/(2*a),(raizDelta)/(2*a));
                printf("x\" = %.2f - i%.2f \n",(-b)/(2*a),(raizDelta)/(2*a));
            }
          }
          //Se este else for executado todo bloco acima será ignorado(primeiro if falso)
          else {
                printf("Coeficiente 'a' invalido, esta equação nao e de grau 2!");
          }


    return 0;
}
