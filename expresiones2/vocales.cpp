/*escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el 
caracter es una vocal minuscula o no*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char letra;
//pedidos de datos
    cout<<"digite un caracter: ";cin>>letra;
//salida de dato
    switch(letra){
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"es una vocal minuscula";break;
        default: cout<<"no es una vocal minuscula";break;
    }
    return 0;
}