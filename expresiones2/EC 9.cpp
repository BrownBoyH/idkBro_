/*escribe un programa que lea de la entrada de datos estandar tres numeros, despues debe leer un 
cuarto numero e indicar si el numero coincide con alguno de los introducidos con anterioridad*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    float n1,n2,n3,n4;
//pedido de datos
    cout<<"ingrese 4 numeros, estos no deben ser iguales: ";cin>>n1>>n2>>n3>>n4;
    if(n4==n1){
        cout<<"el cuarto numero introducido es igual al primero";
    }
    else if(n4==n2){
        cout<<"el cuarto numero introducido es igual al segundo";
    }
    else if(n4==n3){
        cout<<"el cuarto numero introducido es igual al tercero";
    }
    return 0;
}