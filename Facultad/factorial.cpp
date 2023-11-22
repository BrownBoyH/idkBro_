#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{ int num,i, fact=1;
cout << "Ingrese valor: ";
cin >> num;
for(i=1;i<=num;i++)
	fact=fact*i;
cout << "Factorial: " << fact << endl;   
system("pause");
}
