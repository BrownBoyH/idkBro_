#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, N, n, suma = 0;
    cin >> T;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> n;
        suma = suma + n;
    }
    if (suma == T)
    {
        cout << "Es exacto" << endl;
    }
    else if (suma < T)
    {
        cout << "Es posible" << endl;
    }
    else if (suma > T)
    {
        cout << "No es posible" << endl;
    }
    return 0;
}