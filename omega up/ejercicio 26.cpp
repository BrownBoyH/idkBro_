#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, resultado = 0;
    cin >> a >> b;
    if ((a >= 1 && a <= 9) && (b >= 1 && b <= 9))
    {
        resultado = pow(a, b);
        cout << resultado << endl;
    }
    return 0;
}