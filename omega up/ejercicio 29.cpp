#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K, valores, deno = 0;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> valores;
        if ((valores % K) == 0)
        {
            deno++;
        }
    }
    cout << deno << endl;
    return 0;
}