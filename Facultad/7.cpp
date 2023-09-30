//dados dos valores ingresados por el ususario, etermine si son iguales o no
#include<bits/stdc++.h>
using namespace std;int main(){
    int a,b;
    cout<<"ingrese dos valores para determinar si son iguales o no: ";cin>>a>>b;
    if(a==b){
        cout<<"los dos valores son iguales!!"<<a<<"="<<b;
    }else{
        cout<<"los valores no son iguales!!"<<a<<"<>"<<b;
    }
    return 0;
}