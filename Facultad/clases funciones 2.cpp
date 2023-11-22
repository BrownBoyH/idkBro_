#include <bits/stdc++.h>
using namespace std;
int ak47(int limite)
{
    int resultado = 0;
    for (int i = 0; i <= limite; i++)
    {
        if (i % 2 == 0)
        {
            resultado++;
        }
    }
    return resultado;
}
int main()
{
    // funcion obtener numeros pares hasta un valor que se solicite desde el 0
    int suma = 0, limite;
    cin >> limite;
    suma = ak47;
    cout << suma;

    return 0;
}