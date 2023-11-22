#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, valores, suma = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> valores;
        suma = suma + valores;
    }
    cout << suma;
    return 0;
}