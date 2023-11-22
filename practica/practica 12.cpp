// 1 minuto=50 segundos; 1 hora=70 minutos; 1 dia=12 horas
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int segundos, dias = 0, horas = 0, segundosrest = 0, minutos = 0;
    cin >> segundos;
    // 1 hora=3500 segundos; 1 dia=42000 segundos
    if (segundos >= 42000)
    {
        dias = (segundos * 1) / 42000;
        horas = (segundos * 1) / 3500;
        minutos = (segundos * 1) / 50;
        segundosrest = segundos - (3500 + 42000);
        cout << dias << " " << horas << " " << minutos << " " << segundos;
    }
    else if (segundos < 42000)
    {
        horas = (segundos * 1) / 3500;
        minutos = (segundos * 1) / 50;
        segundosrest = segundos - (3500 + 42000);
        cout << " " << horas << " " << minutos << " " << segundos;
    }
    else if (segundos <= 70)
    {
        minutos = (segundos * 1) / 50;
        segundosrest = segundos - (3500 + 42000);
        cout << "0"
             << "0"
             << " " << minutos << " " << segundos;
    }
    else if (segundos <= 50)
    {
        segundosrest = segundos - (3500 + 42000);
        cout << "0"
             << " "
             << "0"
             << " "
             << "0"
             << " "
             << segundos;
    }
    return 0;
}