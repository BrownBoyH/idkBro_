//problema: a mas b sobre c mas d
#include <iostream> 
using namespace std;
int main (){
    float a,b,c,d, resultado=0;
//introduccion de valores
    cout<< "introduzca un primer valor: ";cin>>a;
    cout<< "introduzca un segundo valor: ";cin>>b;
    cout<< "introduzca un tercer valor: ";cin>>c;
    cout<< "introduzca un cuarto valor: ";cin>>d;
//solucion
resultado= (a+b)/(c+d);
cout.precision(2);
//salida de datos
    cout<< "el resultado final es: "<<resultado;
    return 0;
}