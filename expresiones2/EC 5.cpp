/*comprobar si un numero digitado es positivo o negativo*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    float n1;
//pedidos de datos
    cout<<"digite un numero: ";cin>>n1;
//salida de datos
    if(n1==0){
        cout<<"el numero es igual a 0";        
    }
    else if(n1>0){
        cout<<"el numero es positivo";
    }
    else{
        cout<<"el numero es negativo";
    }

    return 0;
}