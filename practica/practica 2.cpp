#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, suma = 0;
    do
    {
        cout<<"ingrese valores: ";
        cin >> num;
        suma = suma + num;
        
    } while (suma != 0);
    cout << suma << endl;
    return 0;
}