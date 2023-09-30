//problemas: a sobre b más uno 
#include <iostream>
using namespace std;
int main (){
    float a,b, resultado=0;
//introduccion de valores
    cout<< "introduzca un primer valor: "; cin>>a;
    cout<< "introduzca un segundo valor: "; cin>>b;
resultado= (a/b)+1;
cout.precision(2);
//salida de resultado
    cout<< "el resultado final es: "<<resultado<<endl;
    return 0;
}