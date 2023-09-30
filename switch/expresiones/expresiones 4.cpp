//problema: a mas b sobre c menos d
#include <iostream>
using namespace std;
int main (){
    float a,b,c,d, resultado=0;
//pedidos de datos
    cout<<"introduzca valor de a: ";cin>>a;
    cout<<"introduzca valor de b: ";cin>>b;
    cout<<"introduzca valor de c: ";cin>>c;
    cout<<"introduzca valor de d: ";cin>>d;
    resultado= a+(b/(c-d));
    cout.precision(2);
//salida de datos
    cout<<"el resultado final es: "<<resultado<<endl;
    return 0;
}