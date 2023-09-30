/* Escribe un progrma que lea la entrada estandar de dos numeros y muestre en la salida estandar su suma,
resta, multiplicacion y division */
#include <iostream>
using namespace std;
int main (){
    float n1,n2, suma=0, resta=0, multiplcacion=0, division=0;
    cout<<"digite un numero: "; cin>>n1; 
    cout<<"digite un segundo numero: "; cin>>n2; 
    suma= n1+n2;
    resta= n1-n2;
    multiplcacion= n1*n2;
    division= n1/n2;
    cout<<"el resultado de la suma es: "<<suma<<endl;
    cout<<"el resultado de la resta es: "<<resta<<endl;
    cout<<"el resultado de la multiplicion es: "<<multiplcacion<<endl; 
    cout<<"el resultado de la division es: "<<division<<endl;
    return 0;
}