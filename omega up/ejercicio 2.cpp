#include<bits/stdc++.h>
using namespace std;
int main(){
    float x,y=0;
    cin>>x;
    y=(pow((((pow(x-1,2))+3*x)),3));
    cout<<fixed<<setprecision(2);
    cout<<y<<endl;
    return 0;
}