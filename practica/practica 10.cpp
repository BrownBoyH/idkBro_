#include <bits/stdc++.h>
using namespace std;
int main()
{
    int calculo = 0, suma = 0;
    for (int i = 1; i <= 10; i++)
    {
        calculo = pow(i, 2);
        suma += calculo;
    }
    cout << suma << endl;

    return 0;
}