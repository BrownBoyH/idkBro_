//escriba un fragmento de programa que intercambie los valores de dos variables
#include <iostream>
using namespace std;
int main (){
    int x,y,aux;
//pedido de datos
    cout<<"digite el valor de x: ";cin>>x;
    cout<<"digite el valor de y: ";cin>>y;
    aux=x;
    x=y;
    y=aux;
//impresion de datos intercambiados
    cout<<"\nel nuevo valor de x es: "<<x<<endl;
    cout<<"\nel nuevo valor de y es: "<<y<<endl;
    return 0;
} 