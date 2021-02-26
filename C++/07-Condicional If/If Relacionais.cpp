#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Digite dois numero e lhe direi quais relacionamentos eles satisfazem." << endl;
    cin >> num1 >> num2;

    if(num1 == num2)
    {
        cout << num1 << " e igual a " << num2 << endl;
    }

    if(num1 != num2)
    {
        cout << num1 << " e diferente de " << num2 << endl;
    }

    if(num1 < num2)
    {
        cout << num1 << " e menor que " << num2 << endl;
    }

    if(num1 > num2)
    {
        cout << num1 << " e maior que " << num2 << endl;
    }

    if(num1 <= num2)
    {
        cout << num1 << " e menor ou igual a " << num2 << endl;
    }

    if(num1 >= num2)
    {
        cout << num1 << " e maior ou igual a " << num2 << endl;
    }

    return 0;
}
