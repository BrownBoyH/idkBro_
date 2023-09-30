#include<bits/stdc++.h>
using namespace std;int main(){
    int a,b;
    cout<<"ingrese dos valores para calular cual de los dos valores es el mayor: "<<endl;cin>>a>>b;
    if(a>b){
        cout<<"el mayor valor es: "<<a;
    }else if(a<b){
        cout<<"el mayor valor es: "<<b;
    } else{
        cout<<"los dos valores son iguales!!";
    }
    return 0;
}