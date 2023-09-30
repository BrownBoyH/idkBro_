//calcule las raices de una ecuacion cuadratica, controle que el calculo sea posible
#include<bits/stdc++.h>
using namespace std;int main(){
    float a,b,c,determinante,x1,x2,det0;
//pedido de datos
    cout<<"ingrese los valores respectivos para hallar los ceros de la ecuación!"<<endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    determinante=pow(((b*b)-4*a*c),1/2);
    if((determinante>0)&&(a!=0)){
        x1=(-(b)+determinante)/(2*a);
        x2=(-(b)-determinante)/(2*a);
        cout<<"los valores de los ceros de la ecuacion son: "<<endl;
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }else if((determinante==0)&&(a!=0)){
        det0=(-(b)+determinante)/(2*a);
        cout<<"la ecuacion solo pasa por el eje x una sola vez!!"<<endl;
        cout<<"x1,x2="<<det0;
    }else if(determinante<0){
        cout<<"la ecuacion no tiene raices reales!!";
    }else if(a==0){
        cout<<"No es una ecuacion cuadratica!!";
    }
    return 0;
}