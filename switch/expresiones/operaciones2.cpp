/*esribe un programa que lea de la entrada estandar el precio de un producto y 
muestre en la salida estandar el precio del producto al aplicarle el IVA
*/
#include <iostream>
using namespace std;
int main (){
    float n1,n2, iva=0;
    cout<<"ingrese el precio de su producto: "; cin>>n1;
    cout<<"ingrese el porcentaje del iva: "; cin>>n2;
    iva= ((n2*n1)/100)+n1;
    cout<<"el precio de su producto junto al valor del iva es: "<<iva;
    return 0;
}