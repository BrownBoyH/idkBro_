/*realice un programa que calcule el valor que toma la siguiente funcion para unos valores dados de x e y: 
raiz cuadrada de x sobre y al cuadrado menos 1
*/
#include<iostream>
#include<math.h>
using namespace std;
int main (){
    float x,y, resultado=0;
//introduccion de datos
    cout<<"digite el valor de X: ";cin>>x;
    cout<<"digite el valor de Y: ";cin>>y;
    resultado=(sqrt(x))/(pow(y,2)-1);
    cout.precision(2);
//salida de datos
    cout<<"\nel valor final de su operacion es: "<<resultado<<endl;
    return 0;
}