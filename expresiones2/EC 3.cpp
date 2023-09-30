/*Escriba un programa que lea dos numeros y que determine cual de ellos es el mayor
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    float n1,n2;
//pedidos de datos
    cout<<"introduzca dos numeros para determinar cual de ellos es el mayor: ";cin>>n1>>n2;
//salida de datos
    if(n1==n2){
        cout<<"los dos numeros son iguales";
    }
    else{
        if(n1>n2){
            cout<<"el numero con mayor denominacion es: "<<n1;
        }
        else{
            cout<<"el numero con mayor denominacion es: "<<n2;
        }
        }
    return 0;
}