#include <bits/stdc++.h>
using namespace std;
int main()
{
    int carnes, dulces, apartado;
    int cantchoc, cantbom, cantchup;
    float Kgpicana, Kgfilete, Kgmix;
    float totalCar, totalDul, total;
    // muestra de datos
    cout << "\nbienvenido a la tienda online!!" << endl;
    cout << "escriba el apartado que desea visitar!" << endl;
    cout << "1. Apartado de carnes" << endl;
    cout << "2. Apartado de dulces" << endl;
    cout << "3. Salir de la tienda" << endl;
    cin >> apartado;
    switch (apartado)
    {
        // apartado de carnes
    case 1:
        // muestra y pedido de datos
        cout << "Este es el apartado de carnes!!" << endl;
        cout << "1. Picana $2500xKg" << endl;
        cout << "2. Filete $3000xKg" << endl;
        cout << "3. mix de asado $7000xKg" << endl;
        cout << "4. salir de la tienda" << endl;
        cout << "elija una opcion!" << endl;
        cin >> carnes;
        // salida de datos
        switch (carnes)
        {
        case 1:
            cout << "usted a elegido picana!";
            cout << "cuantos kg va a querer de picana?" << endl;
            cin >> Kgpicana;
            cout << "el precio total de su compra es";
            cout << "$" << Kgpicana * 2500 << "¿con cuanto dinero desea abonar?";
            cin >> totalCar;

            cout<< "gracias por su compra!!";
            break;
        case 2:
            cout << "usted ha elegido filete!";
            cout << "cuantos kg va a querer de filete?" << endl;
            cin >> Kgfilete;
            cout << "el precio total de su compra es"
                 << "$" << Kgfilete * 3000 << endl
                 << "gracias por su compra!!";
            break;
        case 3:
            cout << "usted ha elegido mix de asado!";
            cout << "cuantos kg va a querer de mix de asado?" << endl;
            cin >> Kgmix;
            cout << "el precio total de su compra es"
                 << "$" << Kgmix * 7000 << endl
                 << "gracias por su compra!!";
            break;
        case 4:
            cout << "gracias por visitar la tienda!";
            break;
        };
        break;
    cout << "¿cuanto dinero va a abonar?" <<
        // apartado de dulces
        case 2:
        cout << "Este es el apartado de dulces!" << endl;
        cout << "1. chocolate $550.75" << endl;
        cout << "2. bombom $255.32" << endl;
        cout << "3. chupetines $50.45" << endl;
        cout << "4. Salir de la tienda online" << endl;
        // pedido de datos
        cout << "elija una opcion!!";
        cin >> dulces;
        // salida de datos
        switch (dulces)
        {
        case 1:
            cout << "usted ha elegido chocolate!";
            cout << "cuantos chocolates va a comprar?" << endl;
            cin >> cantchoc;
            cout << "el precio total de su compra es "
                 << "$" << cantchoc * 550.75 << endl
                 << "gracias por su compra!!";
            break;
        case 2:
            cout << "usted ha elegido un bombom!";
            cout << "cuantos bombones va a comprar?" << endl;
            cin >> cantbom;
            cout << "el precio total de su compra es "
                 << "$" << cantbom * 255.32 << endl
                 << "gracias por su compra!!";
            break;
        case 3:
            cout << "usted ha elegido un chupetin!";
            cout << "cuantos chocolates va a comprar?" << endl;
            cin >> cantchup;
            cout << "el precio total de su compra es "
                 << "$" << cantchup * 50.45 << endl
                 << "gracias por su compra!!";
            break;
        case 4:
            cout << "gracais por visitar la tienda!";
            break;
        };
        break;
    default:
        cout << "Gracias por visitarnos, vuelva pronto!" << endl;
        break;
    }
    return 0;
}