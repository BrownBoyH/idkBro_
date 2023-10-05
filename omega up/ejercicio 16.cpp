#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x == y && x == z && z == y)
    {
        cout << "equilatero" << endl;
    }
    else if (x == y || x == z || z == y)
    {
        cout << "isosceles" << endl;
    }
    else if (x != y && x != z && z != y)
    {
        cout << "escaleno" << endl;
    }

    return 0;
}