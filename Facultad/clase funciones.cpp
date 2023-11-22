#include <bits/stdc++.h>
using namespace std;

// funciones:
// tipos-de-datos Nombre-funcion([parametros])
int SumaDosEnteros(int a, int b)
{
    int resultado;
    resultado = a + b;
    return resultado;
}
int main()
{
    // suma de dos numero
    int a, b, sumar = 0;
    cin >> a >> b;
    sumar = SumaDosEnteros(a, b);
    cout << sumar << endl;
    // se puede usar la funcion en cualquier momento
    cout << SumaDosEnteros(900, 10000) << endl;
    return 0;
}