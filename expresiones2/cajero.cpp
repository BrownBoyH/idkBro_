/*hacer un programa que simule un saldo inicial de 1000 dolares*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int saldo_inicial=1000,opc;
    float ingreso,saldo=0,saqueo;
//pedido de datos
    cout<<"\tBienvenido a su cuenta!"<<endl;
    cout<<"1. ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar dinero de cuenta"<<endl;
    cout<<"3. Consultar saldo en cuenta"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"elija una opcion: ";cin>>opc;
    if ((saldo_inicial==0)&&(opc==2)){
        cout<<"debe ingresar dinero en la cuenta:"<<endl;
    }else{ 
//salida de datos
    switch(opc){
        case 1:
            cout<<"digite la cantidad de dinero a ingresar: ";cin>>ingreso;
            saldo=saldo_inicial+ingreso;
            cout<<"dinero en cuenta: "<<saldo;break;
        case 2: cout<<"digite la cantidad de dinero a retirar: ";cin>>saqueo;
            saldo=saldo_inicial-saqueo;
            cout<<"su saldo restante es: "<<saldo;break;
        case 3: cout<<"su saldo inicial es de: "<<saldo_inicial<<endl; cout<<"\tGracias por su tiempo!";break;
        case 4: cout<<"gracias por su tiempo!";break;
    } }
    return 0;
}