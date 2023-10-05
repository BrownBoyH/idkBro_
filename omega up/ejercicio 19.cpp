#include <bits/stdc++.h>
using namespace std;
int main()
{
    int P, Q, expresion;
    cin >> P >> Q;
    expresion = (pow(P, 3) + pow(Q, 4) - 2 * pow(P, 2));
    if (expresion < 680)
    {
        cout << P << endl;
        cout << Q << endl;
    }
    return 0;
}