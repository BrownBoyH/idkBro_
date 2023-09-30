/*escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma ax^2+bx+c=0
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main (){
    float a,b,c,d, x1=0,x2=0;
//introduccion de datos
    cout<<"introduzca el valor de a: ";cin>>a;
    cout<<"introduzca el valor de b: ";cin>>b;
    cout<<"introduzca el valor de c: ";cin>>c;
    d=(sqrt(pow(b,2)-4*a*c));
    if(d>=0){
        x1=(-b+d)/(2*a);
        x2=(-b-d)/(2*a);
    }
    else{
        cout<<"dos raices irreales";
    }    
//salida de resultados
    cout<<"\nel valor de x1 es igual a: "<<x1<<endl;
    cout<<"\nel valor de x2 es igual a: "<<x2<<endl;
    return 0;
}