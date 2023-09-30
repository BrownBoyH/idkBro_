/*la calificacion final de un estudiante es la media ponderada de 3 notas:
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un 60% y la nota de
participacion que cuenta el 10% restante, escriba un programa que lea de la entrada las 3 notas del alumno 
y escriba en la salida estandar su nota final.
*/
#include <iostream>
using namespace std;
int main(){
    float practica, teorica, participacion, resultado=0;
//ingreso de datos
    cout<<"ingrese su nota de practicas: ";cin>>practica;
    cout<<"ingrese su nota teorica: ";cin>>teorica;
    cout<<"ingrese su nota de participacion: ";cin>>participacion;
    practica*=0.30;
    teorica*=0.60;
    participacion*=0.10;
    resultado=practica+teorica+participacion;
//impresion de resultado
    cout<<"\nsu nota final promediada es: "<<resultado<<endl;
    return 0;
}