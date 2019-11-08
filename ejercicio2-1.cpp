/* EJERCICIO 2.1 página 50

Escribir un programa que lea dos valore reales y escriba en la salida estandar un mensaje indicando cuál es el mayor

ENTRADAS 
numeroreal1
numeroreal2

SALIDA
El número mayor entre los dos
*/

#include <iostream>
using namespace std;

int main () {

	//Declaración de variables a usar
		//Los numeros a usar
	double numeroreal1 = 0;
	double numeroreal2 = 0;
		//La variable bool a usar
	bool mayor = false;

	//Entrada de valores
	cout << "BIENVENIDOS AL COMPARADOR DE NÚMEROS REALES" << endl;
	cout << "\nIntroduzca dos valores reales a comparar y el programa le mostrará por pantalla el mayor de ellos." << endl;
	cout << "Por favor, introduzca el primer valor real: " ;
	cin >> numeroreal1;
	cout << "Por favor, introduzca el segundo valor real: ";
	cin >> numeroreal2;


	//Salida

	if ( numeroreal1 > numeroreal2 ) {
		cout << "\nEl valor real mayor es: " << numeroreal1 << endl;
	}
	
	if ( numeroreal1 < numeroreal2 ) {
		cout << "\nEl valor real mayor es: " << numeroreal2 << endl;
	}

	if ( numeroreal1 == numeroreal2 ) {
		cout << "\nLos dos números reales tienen el mismo valor." << endl;
	}

	cout << "\n Gracias por usar el comparador" << endl;

}
