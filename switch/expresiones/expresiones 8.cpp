/*escriba un programa estandar que lea de la entrada estandar los dos catetos de un triangulo rectangulo
y escriba en la salida estandar su hipotenusa
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, resultado = 0;
    double raiz;
    // introduccion de datos
    cout << "introduzca el valor del primer cateto: ";
    cin >> a;
    cout << "introduzca el valor del segundo cateto: ";
    cin >> b;
    a = a * a;
    b = b * b;
    resultado = a + b;
    raiz = (sqrt(resultado));
    // salida de datos
    cout << "\nel resultado final es: " << raiz << endl;
    return 0;
}