#include<bits/stdc++.h>
using namespace std;
    string mp9(int t,int n){
        string resultado;
        int tiempo,totalt=0;
        for(int i=0;i<n;i++){
            cin>>tiempo;
            totalt=totalt+tiempo;
        }
        if(totalt>t){
            resultado="No es posible";
        }else if(totalt<t){
            resultado="Es posible";
        }else{
            resultado="es exacto";
        }
        return resultado;
    }
int main(){
    int t,n;
    string r;
    cin>>t>>n;
    r=mp9(t,n);
    cout<<r<<endl;
    return 0;
}