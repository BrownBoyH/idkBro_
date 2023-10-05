#include <bits/stdc++.h>
using namespace std;
int main (){
    float num1,num2;
    char signo;
    cout<<"ingrese dos numeros y luego el tipo de operacion que desea realizar con su debido signo: "<<endl;
    cin>>num1>>num2>>signo;
    switch(signo){
        case '+': cout<<"el resultado de la suma es: "<<num1+num2<<endl;break;
        case '-': cout<<"el resultado de la resta es: "<<num1-num2<<endl;break;
        case '*': cout<<"el resultado del producto es: "<<num1*num2<<endl;break;
        case '/': cout<<"el resultado de la division es: "<<num1/num2<<endl;break;
        case '%': cout<<"el resultado del resto es: "<<num1%num2<<endl;break;
        case '^': cout<<"el resultado de la potencia es: "<<pow(num1,num2)<<endl;break;
    }
    return 0;
}