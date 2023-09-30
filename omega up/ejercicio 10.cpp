#include<bits/stdc++.h>
using namespace std;
int main(){
    float x,y=0;
    cin>>x;
    y=(((x+pow(x,2))/(5*x+3))+x)*((x+pow(x,2))/(5*x+3))/(((x+pow(x,2))/(5*x+3))+2*x);
    cout<<y;
    return 0;
}


