#include <bits/stdc++.h>
using namespace std;
int main()
{
    int M, N, suma;
    cin >> M >> N;
    suma = M + N;
    if (suma > 0)
    {
        cout << suma << endl;
    }
    else if (suma < 0)
    {
        cout << -(suma) << endl;
    }
    return 0;
}