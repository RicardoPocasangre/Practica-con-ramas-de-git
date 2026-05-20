#include <iostream>
using namespace std;

int a, b, resta;

int main()
{
    cout << "Ingresa dos valores" << endl;
    cin >> a;
    cin >> b;

    if (a < 0 || b < 0)
    {
        cout << "ingrese valores positivos";
    }
    else
    {
        resta = a - b;

        cout << "su resultado es de: " << resta << endl;
    }

    return 0;
}