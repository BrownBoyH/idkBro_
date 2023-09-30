/*escriba un programa que lea dos numeros y determine cual de ellos es el mayor*/
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n1,n2;
//ingreso de datos
    cout<<"ingrese dos numeros: ";cin>>n1>>n2;
    if(n1==n2){
        cout<<"los numeros son iguales";
    }
    else{
    if(n1>n2){
        cout<<"el mayor es: "<<n1;
    }
    else{
        cout<<"el mayor es: "<<n2;
    }
    }
    return 0;
}