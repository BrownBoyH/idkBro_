#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dividendo, divisor, c = 0;
    cout << "ingrese dividendo: " << endl;
    cin >> dividendo;
    cout << "ingrese divisor";
    cin >> divisor;
    while (dividendo >= divisor)
    {
        dividendo = dividendo - divisor;
        c++;
    }
    cout << "cociente: " << c << endl;
    cout << "resto: " << dividendo << endl;
    return 0;
}