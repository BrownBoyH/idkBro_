#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numero, mayoria;

    do
    {
        cin >> numero;
        if (numero > 0)
        {
            mayoria++;
        }
    } while (numero != 0);
    cout << mayoria << endl;
    return 0;
}