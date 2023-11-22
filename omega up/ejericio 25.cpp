#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    if ((N % 2) == 0)
    {
        for (int i = N; i <= M; i = i + 2)
        {
            cout << i << endl;
        }
    }
    else if ((N % 2) != 0)
    {
        for (int i = N + 1; i <= M; i = i + 2)
        {
            cout << i << endl;
        }
    }
    return 0;
}