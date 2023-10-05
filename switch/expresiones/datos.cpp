#include <bits/stdc++.h>
using namespace std;
int main()
{
    int C, P, H, repartir_equitativamente = 0;
    cin >> C >> P >> H;
    repartir_equitativamente = ((C - P) % H);
    cout << repartir_equitativamente << endl;
    return 0;
}