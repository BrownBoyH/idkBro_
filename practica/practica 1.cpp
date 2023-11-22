#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int fact = 1;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
        cout << "factorial: " << fact << endl;
    }
    return 0;
}