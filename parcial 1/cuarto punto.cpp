#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hueso1, olor1, hueso2, olor2;
    cin >> olor1 >> hueso1 >> olor2 >> hueso2;
    if (olor1 > olor2 && hueso1 > hueso2)
    {
        cout << "Hueso 1" << endl;
    }
    else if (olor2 > olor1 && hueso2 > hueso1)
    {
        cout << "Hueso 2" << endl;
    }
    else if ((olor1 > olor2 && hueso1 < hueso2) || (olor1 < olor2 && hueso1 > hueso2))
    {
        cout << "Perrito confundido :(" << endl;
    }
    return 0;
}