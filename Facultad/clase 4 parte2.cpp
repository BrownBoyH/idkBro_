#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"digite un numero positivo: "<<endl;
    cin>>x;
    if((x%2==0)&&(x>0)){
        cout<<"el numero ingresado es par y positivo"<<endl;
    }
    else{
        if((x%2>0)&&(x>0)){
            cout<<"el numero no es impar y positivo"<<endl;
        }
    }
    if(x<0){
        cout<<"el numero debe ser positivo"<<endl;
    }
    return 0;
}