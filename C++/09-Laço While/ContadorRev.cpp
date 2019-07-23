#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Também podemos fazer uma decrementação
    int contador = 10;

    while(contador >= 0) {
        cout << contador << " ";
        contador--;
    }
    cout << endl;
    system("pause");
    return 0;
}
