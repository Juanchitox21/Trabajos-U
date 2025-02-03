/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	double Dolares, Pesos, Cambio_a_dolares, Cambio_a_pesos; //Declaracion de valores

	cout<<"B?Cuantos dolares quiere cambiar a pesos?" <<endl;

	cin>> Pesos;

	Cambio_a_dolares = Pesos * 4200;

	cout<< "Sus " << Pesos << "  Dolares ahora equivalen a: " << Cambio_a_dolares << endl;

	cout<<"Cuantos pesos quiere cabmiar a dolares?" <<endl;

	cin>> Dolares;

	Cambio_a_pesos = Dolares / 4200;

	cout<< "Sus  " << Dolares << "  Ahora equivalen a: " <<Cambio_a_pesos << endl;


	return 0;
}