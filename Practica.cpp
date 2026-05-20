#include <iostream>
#include <windows.h>
using namespace std;

int opc = 1;
float n, suma;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    while (opc <= 5)
    {
        cout<<"Ingrese un valor: ";
        cin>>n;
        suma = suma + n;
        opc = opc + 1;
    }

    cout<<"La suma de tus numeros es: "<<suma;

    return 0;
}