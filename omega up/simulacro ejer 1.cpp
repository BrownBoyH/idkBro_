#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, calculo = 0;
    cin >> num;
    for (int i = 0; i <= 10; i++)
    {
        calculo = num * i;
        cout << calculo << endl;
    }
    return 0;
}