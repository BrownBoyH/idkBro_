//escriba un programa que lea la nota final de 4 alumnos y calcule la nota final de los cuatro alumnos
#include <iostream>
using namespace std;
int main (){
    float a,b,c,d, resultado=0;
//ingreso de datos
    cout<<"ingresen sus notas: ";
    cout<<"alumno 1: ";cin>>a;
    cout<<"alumno 2: ";cin>>b;
    cout<<"alumno 3: ";cin>>c;
    cout<<"alumno 4: ";cin>>d;
    resultado=(a+b+c+d)/4;
    cout.precision(2);
//impresion de datos
    cout<<"\nel resultado final de sus notas es: "<<resultado<<endl;
    return 0;
}
