#include <bits/stdc++.h>
using namespace std;
bool estaTodoEnMayusculas(const string &cadena)
{
    for (char c : cadena)
    {
        if (isalpha(c) && !isupper(c))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string cadena;
    cout << "ingrese una cadena" << endl;
    cin >> cadena;
    if (estaTodoEnMayusculas(cadena))
    {
        cout << "True";
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}