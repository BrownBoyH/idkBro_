/*escriba un programa que lea tres numeros y determine cual de ellos es el mayor
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    float n1,n2,n3;
//pedidos de datos
    cout<<"digite 3 numeros para determinar cual de ellos es el mayor: ";cin>>n1>>n2>>n3;
//preceso y salida de datos
    if ((n1>n2)&&(n1>n3)){
        cout<<"el primer numero introducido es el mayor";
    }
    else if((n2>n1)&&(n2>n3)){
        cout<<"el segundo numero introducido es el mayor";
    }
    else if((n3>n1)&&(n3>n2)){
        cout<<"el tercer numero introducido es el mayor";
    }
    return 0;
}