/*realice un programa que lea de la entrada estandar los siguientes datos de una persona:
edad: dato de tipo entero 
sexo: dato de tipo caracter
altura en metros: dato de tipo real
*/
#include <iostream>
using namespace std;
int main (){
//entrada de datos
    int edad; char sexo[10]; float altura;
    cout<< "ingrese su edad: "; cin>> edad;
    cout<< "ingrese su sexo: "; cin>> sexo; 
    cout<< "ingrese su altura: "; cin>> altura;
//salida de datos 
    cout<< "\nsu edad es: "<<edad<<endl;
    cout<< "\nsu sexo es: "<<sexo<<endl; 
    cout<< "\nse alura es: "<<altura<<endl;
    cout.precision(2);
    return 0;
}