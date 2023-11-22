#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Tx, Ty;
    int enemy1x, enemy1y;
    int enemy2x, enemy2y;
    int medida1 = 0, medida2 = 0;
    cin >> Tx >> Ty;
    cin >> enemy1x >> enemy1y;
    cin >> enemy2x >> enemy2y;
    medida1 = pow((pow((enemy1x - Tx), 2) + pow((enemy1y - Ty), 2)), 0.5);
    medida2 = pow((pow((enemy2x - Tx), 2) + pow((enemy2y - Ty), 2)), 0.5);
    if (medida1 < medida2)
    {
        cout << 1 << endl;
    }
    else if (medida1 > medida2)
    {
        cout << 2 << endl;
    }
    return 0;
}