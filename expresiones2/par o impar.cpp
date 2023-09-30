/*realice un programa que lea un valor entero y determine si se trata de un numero par o impar
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
//pedidos de datos
    cout<<"ingrese un numero: ";cin>>n1;
//salida de datos
    if(n1==0){
        cout<<"el numero es igual a 0.";
    }
    else if(n1%2==0){
        cout<<"el numero es par.";
    }
    else{
        cout<<"el numero es impar";
    }
    return 0;
}