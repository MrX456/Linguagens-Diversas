#include <iostream>

using namespace std;

//Somatorio de valores de 1 a 100

int main()
{
    int sum = 0;

    for(int i = 0; i <= 100; i++)
    {
        sum += i;
    }

    cout << "O somatorio de 1 a 100 e " << sum << endl;

    return 0;
}
