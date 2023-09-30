/*escriba un programa que solicite una edad e indique en la salida estandar 
si la edad introducida esta en el rango [18-25]*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int edad;
//entrada de datos
    cout<<"ingrese su edad: ";cin>>edad;
//salida de datos
    if((edad>=18)&&(edad<=25)){
        cout<<"su edad esta en el rango de [18-25]";
    }
    else{
        cout<<"su edad no se encuentra en el rango de [18-25]";
    }
    return 0;
}