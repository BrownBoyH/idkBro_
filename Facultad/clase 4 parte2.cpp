#include <bits/stdc++.h>
using namespace std;
int main()
{
    // w a s d
    char tecla;
    cin >> tecla;
    while(tecla=='W'||tecla=='S'||tecla=='D'||tecla=='A'){ 
    if (tecla == 'W' || tecla == 'w')
    {
        cout << "Adelante"<<endl;
    }
    else if (tecla == 's' || tecla == 'S')
    {
        cout << "atras" << endl;
    }
    else if (tecla == 'd' || tecla == 'D')
    {
        cout << "derecha" << endl;
    }
    else if (tecla == 'A' || tecla == 'a')
    {
        cout << "izquierda" << endl;
    }cin>>tecla;
    }
    return 0;
}