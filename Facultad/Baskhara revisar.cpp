// calcule las raices de una ecuacion cuadratica, controle que el calculo sea posible
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c, determinante;
    // pedido de datos
    cout << "ingrese los valores respectivos para hallar los ceros de la ecuación!" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    // calculo y salida de datos
    determinante = pow((b * b - 4 * a * c), 1 / 2);
    if (determinante >= 0)
    {
        cout << "x1=" << (-b + determinante) / 2 * a << endl;
        cout << "x2=" << (-b - determinante) / 2 * a << endl;
    }
    else
    {
        cout << "no hay ceros en la ecuacion, la parabola no intersecta el eje x" << endl;
    }
    return 0;
}