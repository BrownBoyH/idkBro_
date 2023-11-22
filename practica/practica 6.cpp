#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, unidades, decenas;
    cin >> num;
    unidades = num % 10;
    num /= 10;
    decenas = num % 10;
    num /= 10;
    switch (unidades)
    {
    case 1:
        cout << "1";
        break;
    case 2:
        cout << "10";
        break;
    case 3:
        cout << "11";
        break;
    case 4:
        cout << "100";
        break;
    case 5:
        cout << "101";
        break;
    case 6:
        cout << "110";
        break;
    case 7:
        cout << "111";
        break;
    case 8:
        cout << "1000";
        break;
    case 9:
        cout << "1001";
        break;
    }
    switch (decenas)
    {
    case 0:
        cout << "0";
        break;
    case 1:
        cout << "10";
        break;
    case 3:
        cout << "11";
        break;
    case 4:
        cout << "100";
        break;
    case 5:
        cout << "101";
        break;
    case 6:
        cout << "110";
        break;
    case 7:
        cout << "111";
        break;
    case 8:
        cout << "1000";
        break;
    case 9:
        cout << "1001";
        break;
    }
    return 0;
}