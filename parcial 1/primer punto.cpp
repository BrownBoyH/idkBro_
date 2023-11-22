#include <bits/stdc++.h>
using namespace std;
int main()
{
    float operacion = 0, variable = 0, x, y, z;
    cin >> x >> y >> z;
    variable = (2 * x) + y - z;
    operacion = (7 + pow(variable, variable)) / variable;
    cout << operacion << endl;
    return 0;
}