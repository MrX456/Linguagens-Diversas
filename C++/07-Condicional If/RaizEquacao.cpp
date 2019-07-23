#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    //Pedir os coeficientes de uma equação de grau 2 e encontrar raizes
    float a, b, c,
          delta,
          raizDelta,
          raiz1, raiz2;

    cout << "Dada a equacao de grau 2 ax^2 + bx + c = 0" << endl;
    cout << "Digite o valor do coeficiente a : ";
    cin >> a;

    cout << "Digite o valor do coeficiente b : ";
    cin >> b;

    cout << "Digite o valor do coeficiente c : ";
    cin >> c;

    //Vamos verificar se equacao é de grau 2
    if(a != 0) {
        //Formula delta
        delta = (b * b) - (4 * a * c);
        raizDelta = sqrt(delta);

         //Vamos verificar raiz do delta(este if só é execuatdo se o if de cima for executado primeiro)
         //raiz positiva
         if(delta >= 0) {

            raiz1 = (-b + raizDelta) / (2 * a);
            raiz2 = (-b - raizDelta) / (2 * a);

            //Retornando raizes
            cout.precision(0);
            cout << "Raizes da equacao : " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
            cout.precision(2);
            cout << "x\' = " << raiz1 << " x\" = " << raiz2 <<endl;
         }
         //Raiz delta negativa(numeros complexos)
         else {
            delta = - delta;
            raizDelta = sqrt(delta);

            //Rettornando raizes
            cout.precision(0);
            cout << "Raizes da equacao : " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
            cout.precision(2);
            cout <<  "x\' = " << (-b)/(2*a) << " + i" << (raizDelta)/(2*a) << endl;
            cout <<  "x\" = " << (-b)/(2*a) << " - i" << (raizDelta)/(2*a) << endl;

         }
    }
    //Se este else for executado todo bloco acima será ignorado(primeiro if falso)
    else {
        cout << "Coeficiente 'a' invalido, esta equacao nao e de grau 2!" << endl;
    }
    system("pause");
    return 0;
}
