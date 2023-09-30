#include<bits/stdc++.h>
using namespace std;
int main(){
    float base, altura, resultado=0;
//pedido de datos
    cout<<"ingrese la base:"<<endl;
    cin>>base;
    cout<<"ingrese la altura: "<<endl;
    cin>>altura;
//calculo
    resultado=(base*altura)/2;
//salida de datos
    cout<<"el area del triangulo es: "<<endl<<resultado;
    return 0;
}