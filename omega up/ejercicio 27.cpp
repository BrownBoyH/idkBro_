#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    float e = 2.7182818284590452353602874713527;
    float y = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        y = (pow(e, 2 * i)) - i;
        cout << i << " " << fixed << setprecision(3) << y << endl;
    }
    return 0;
}