#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    char animal[10];
    int distancia;
    cin >> animal;
    cin >> distancia;
    if (strcmp(animal, "s") != 0)
    {
        cout << "estas a salvo!" << endl;
    }
    else if (strcmp(animal, "s") == 0)
    {
        if (distancia >= 10)
        {
            cout << "retrocede y busca otro camino" << endl;
        }
        else if (distancia < 10)
        {
            cout << "corre, corre por tu vida!" << endl;
        }
    }
    return 0;
}