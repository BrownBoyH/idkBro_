//a mas b sobre c, todo sobre d mas e sobre f
#include <iostream>
using namespace std; 
int main (){
    float a,b,c,d,e,f, resultado=0;
//pedidos de datos
    cout<<"proporcione valor de a: ";cin>>a;
    cout<<"proporcione valor de b: ";cin>>b;
    cout<<"proporcione valor de c: ";cin>>c;
    cout<<"proporcione valor de d: ";cin>>d;
    cout<<"proporcione valor de e: ";cin>>e;
    cout<<"proporcione valor de f: ";cin>>f;
    resultado= (a+(b/c))/(d+(e/f));
    cout.precision(2);
//impresion de resultado
    cout<<"el resultado de la operación es: "<<resultado<<endl;
    return 0;
}