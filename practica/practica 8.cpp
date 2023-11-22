#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numero, multiplo = 0;
    cin >> numero;
    for (int i = 0; i <= 10; i++)
    {
        multiplo = i * numero;
        cout << multiplo << endl;
    }
    return 0;
}