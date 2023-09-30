/*la sentencia switch
    switch(expresion){
        case literal1:
        conjunto de instrucciones1;
        break;
    case literal2:
        conjunto de instrucciones2;
        break;
    case literal n:
        conjunto de instrucciones n;
        break;
    default:
        conjunto de instrucciones por defecto;
        break;
    }
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int numero;
//ingreso de datos
    cout<<"ingrese un numero entre uno y cinco: ";cin>>numero;
    switch(numero){
        case 1: cout<<"es el numero 1";break;
        case 2: cout<<"es el numero 2";break;
        case 3: cout<<"es el numero 3";break;
        case 4: cout<<"es el numero 4";break;
        case 5: cout<<"es el numero 5";break;
        default: cout<<"el numero que digito no esta en el rango de uno y cinco";break;
    }
    return 0;
}