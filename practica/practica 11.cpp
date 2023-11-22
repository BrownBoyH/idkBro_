#include <bits/stdc++.h>
using namespace std;
int main()
{
    int temp, suma = 0;
    for (int i = 1; i <= 24; i++)
    {
        cin >> temp;
        if (i == 4 || i == 8 || i == 12 || i == 16 || i == 20 || i == 24)
        {
            suma = suma + temp;
        }
    }
    return 0;
}