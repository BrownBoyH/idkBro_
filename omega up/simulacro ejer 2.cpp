#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numero, maximo = INT_MIN, minimo = INT_MAX;
    cin >> numero;
    maximo = numero;
    minimo = numero;
    for (int i = 1; i < 5; i++)
    {
        cin >> numero;
        if (numero > maximo)
        {
            maximo = numero;
        }
        if (numero < minimo)
        {
            minimo = numero;
        }
    }
    cout << minimo <<" "<< maximo << endl;

    return 0;
}