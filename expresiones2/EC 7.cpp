/*escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar 
si el caracter es una vocal minuscula, es una vocal mayuscula o no es una vocal*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char letra;
//pedido de datos
    cout<<"ingrese una letra: ";cin>>letra;
//salida de datos
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"es una vocal minuscula";break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"es una vocal mayuscula";break;
        default: cout<<"no es una vocal";break;
    }
    return 0;
}