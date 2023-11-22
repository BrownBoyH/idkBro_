#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,arma, poder, indicePoder = 1, mayorpoder = 0;
    cin >> n;
    cin >> poder;
    mayorpoder=poder;
    for (int i = 2; i <= arma; i++)
    {
        cin>>poder;
        if (poder > mayorpoder)
        {
            mayorpoder = poder;
            indicePoder = i;
        }
    }
    cout << mayorpoder << " " << indicePoder;

    return 0;
}