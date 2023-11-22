#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numero, numeros, iguales = 0, cantidad;
    cin >> cantidad;
    cin >> numero;
    for (int i = 1; i <= cantidad; i++)
    {
        cin >> numeros;

        if (numeros == numero)
        {
            iguales = iguales + 1;
        }
    }
    cout << iguales << endl;
    return 0;
}