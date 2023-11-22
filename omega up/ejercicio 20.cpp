#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, gatoA, gatoB;
    cin >> A >> B >> C;
    gatoA = abs(A - C);
    gatoB = abs(B - C);
    if (gatoA < gatoB)
    {
        cout << "gato A" << endl;
    }
    else if (gatoB < gatoA)
    {
        cout << "gato B" << endl;
    }
    else if (gatoA == gatoB)
    {
        cout << "raton C" << endl;
    }
    return 0;
}