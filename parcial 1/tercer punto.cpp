#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c, calculo = 0;
    cin >> a >> b >> c;
    a = pow(a, 2);
    b = pow(b, 2);
    c = pow(c, 2);
    calculo = a + b;
    if ((calculo) == c)
    {
        cout << "SI" << endl;
    }
    else if ((calculo) != c)
    {
        cout << "NO" << endl;
    }
    return 0;
}