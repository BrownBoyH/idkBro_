#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, valor;
    int minimo = 0;
    cin >> n;
    cin >> valor;
    minimo = valor;
    for (int i = 2; i <= n; i++)
    {
        cin >> valor;
        if (valor < minimo)
        {
            minimo = valor;
        }
    }
    cout << "el minimo es: " << minimo << endl;
    return 0;
}