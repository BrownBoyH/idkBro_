#include<bits/stdc++.h>
using namespace std; int main(){
    float a,b,hipotenusa;
    cout<<"inserte el valor del cateto a: ";cin>>a;
    cout<<"inserte el valor del cateto b: ";cin>>b;
    if((a<0)||(b<0)){
        cout<<"los catetos no pueden ser menores a 0 puesto que son distancias y estas no pueden ser negativas";
    }
    else{
        hipotenusa= pow(((a*a)+(b*b)),1/2);
        cout<<"la hipotenusa es igual a: "<<hipotenusa;
    }    
    return 0;
}