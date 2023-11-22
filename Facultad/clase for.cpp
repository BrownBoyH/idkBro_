#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, i, suma = 0, valor;
    cout << "ingrese la cantidad de numeros a sumar" << endl;
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        cout << "ingrese valor" << endl;
        cin >> valor;
        suma = suma + valor;
    }
    cout << "suma: " << endl
         << suma;
    return 0;
}