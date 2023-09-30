#include<bits/stdc++.h>
using namespace std;
int main(){
    float N,M,resultado=0;
    cin>>N>>M;
    resultado=(M*1500)/((N*1500)/5);
    cout<<fixed<<setprecision(1);
    cout<<resultado<<" "<<"horas."<<endl;
    return 0;
}