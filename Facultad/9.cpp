//determine si un numero ingresado por el usuario es impar y positivo
#include<bits/stdc++.h>
using namespace std;int main(){
    int a;
    cout<<"ingrese un numero!!"<<endl;cin>>a;
    if((a%2==1)){
        if(a>0){
            cout<<"el numero ingresado es mayor que cero y es impar!!";
        }else{
            cout<<"el numero ingresado es impar pero negativo!!";
        }
    }else if(a%2==0){ 
        if(a>0){
            cout<<"el numero ingresado es par y positivo!!";
        }else{
            cout<<"el numero ingresado es par pero negativo!!";
        }
    }
    return 0;
}