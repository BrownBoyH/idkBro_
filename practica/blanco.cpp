#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numero, calculo = 0;
    cin >> numero;
    while (numero >= 10)
    {
        calculo = 0;
        while (numero > 0)
        {
            calculo += numero % 10;
            numero /= 10;
        }
        numero = calculo;
    }
    cout << numero << endl;
    return 0;
}