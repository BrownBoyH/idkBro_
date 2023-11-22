#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numero, calculo = 0;
    int sumas;
    cin >> numero;
    do
    {
        if (numero > 100)
        {
            do
            {
                sumas = numero % 100;
                calculo = ((sumas / 10) + (sumas % 10)) + (numero / 100);
            } while (calculo < 10);
        }
        else if (numero < 100)
        {
            calculo = (numero / 10) + (numero % 10);
        }
        if (calculo < 10)
        {
            cout << calculo << endl;
        }
        else if (calculo >= 10)
        {
            cout << (calculo / 10) + (calculo % 10) << endl;
        }
    } while (numero < 10);
    return 0;
}