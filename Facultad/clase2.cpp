#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,res=0;
    cout<<"ingrese los valores de x y y para calcular la operacion: "<<endl;
    cin>>x;
    cin>>y;
    res= (pow(x,2))+(x*y)-(pow((x-y),2));
    cout<<"el resultado es: "<<res<<endl;
    return 0;
}