#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x, y = 0, z = 0;
    cin >> x;
    y = (x + 5) / (2 * (x + 1));
    z = (pow(y, 2) + x * (x - 2 * y)) / (x * y);
    cout << z << endl;
    return 0;
}