/*mostrar los meses del año pidiendole al usuario un numero entre [1-12]
y mostrar el mes que corresponde*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int mes;
//pedido de dato
    cout<<"ingrese su mes de nacimiento con numero: ";cin>>mes;
    switch(mes){
        case 1: cout<<"su mes de nacimiento es enero!";break;
        case 2: cout<<"su mes de nacimiento es febrero!";break;
        case 3: cout<<"su mes de nacimiento es marzo!";break;
        case 4: cout<<"su mes de nacimiento es abril!";break;
        case 5: cout<<"su mes de nacimiento es mayo!";break;
        case 6: cout<<"su mes de nacimiento es junio!";break;
        case 7: cout<<"su mes de nacimiento es julio!";break;
        case 8: cout<<"su mes de nacimiento es agosto!";break;
        case 9: cout<<"su mes de nacimiento es septiembre!";break;
        case 10: cout<<"su mes de nacimiento es octubre!";break;
        case 11: cout<<"su mes de nacimiento es noviembre!";break;
        case 12: cout<<"su mes de nacimiento es diciembre!";break;
        default: cout<<"el numero ingresado no corresponde a un mes! reintenta otra vez";break;
    }
    return 0;
}