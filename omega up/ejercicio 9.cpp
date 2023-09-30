#include<bits/stdc++.h>
using namespace std;
int main(){
    float x,y,z,resultado=0;
    cin>>x>>y>>z;
    resultado=(x+x*(y+pow(z,2)))/((x+M_PI)*(y+M_PI));
    cout<<resultado<<endl;
    return 0;
}