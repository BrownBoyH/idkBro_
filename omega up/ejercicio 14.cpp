#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, distinto, resta;
    cin >> A >> B;
    resta = A - 1;
    distinto = (7 * (resta) + B) % 2;
    if ((A + B) == 5)
    {
        cout << 2 * A + (B + 3) << endl;
    }
    else if ((A + B) != 5)
    {
        if (distinto == 0)
        {
            cout << resta - B << endl;
        }
        else if (distinto != 0)
        {
            cout << resta * B << endl;
        }
    }
    return 0;
}