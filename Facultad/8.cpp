#include<bits/stdc++.h>
using namespace std;int main(){
    char a;
    cout<<"introduzca un caracter ya sea numerico o alfabetico: "<<endl;cin>>a;
    if (isdigit(a)){
        cout<<"el caracter ingresado es numerico!!"<<a;
    }else if(isalpha(a)){
        if(isupper(a)){ 
        cout<<"el caracter ingresado es alfabetico y mayuscula!!"<<a;
    }else{
        cout<<"el caracter ingresado es alfabetico y minuscula!!"<<a;
    }} else{
        cout<<"el caracter ingresado no es ni alfabetico ni numerico!!";
    }
    return 0;
}