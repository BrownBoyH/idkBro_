#include<bits/stdc++.h>
using namespace std;int main(){
    int a,b,c;
//pedido de datos
    cout<<"ingrese 3 valores para determinarlos en orden creciente: "<<endl;cin>>a>>b>>c;
//salida de datos
    if ((a>b)&&(a>c)){
        if (b>c){
            cout<<c<<"<"<<b<<"<"<<a;
        }else{
            cout<<b<<"<"<<c<<"<"<<a;
        }
    } if((b>a)&&(b>c)){
        if(a>c){
            cout<<c<<"<"<<a<<"<"<<b;
        }else{
            cout<<a<<"<"<<c<<"<"<<b;
        }
    } if((c>a)&&(c>b)){
        if(b<a){
            cout<<b<<"<"<<a<<"<"<<c;
        }else{
            cout<<a<<"<"<<b<<"<"<<c;
        }
    }
    return 0;
}