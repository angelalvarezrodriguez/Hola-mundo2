/* EJERCICIO 2.2 página 50 

Escribir un programa que lea un valor entero, y escriba en la salida estandar un mensaje indicando si en par o impar.

ENTRADA
numero entero

SALIDA
Par o impar

*/

#include <iostream>
using namespace std;

int main () {
	
	//Declaración de la variable 
	int numeroentero = 0;

	//Entrada

	cout << "PROGRAMA PAR O IMPAR, ESA ES LA CUESTIÓN" << endl;
	cout << "\nIntroduzca un número entero y este programa le indicará si es par o impar" << endl;
	cout << "Por favor, introduzca el numero a analizar: " ;
	cin >> numeroentero;

	//Salidas

	if ( (numeroentero % 2) == 0 ) {
		
		cout << "El número es par" << endl;
	}

	if ( (numeroentero % 2) != 0 ) {
		
		cout << "El número es impar" << endl;
	}

	cout << "\nGRACIAS POR USAR EL PROGRAMA  :) " << endl;

} 
