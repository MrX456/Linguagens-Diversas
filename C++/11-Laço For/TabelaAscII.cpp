#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
     //tabela ascII usando for

     for(int i = 0; i <= 255; i++) {
        cout << i << " = " << (char)i << endl;
     }

    system("pause");
    return 0;
}
