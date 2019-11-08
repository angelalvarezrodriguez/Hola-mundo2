/* EJERCICIO 2.4 página 51

Escriba un programa que lea un número real, correspondiente al radio de un círculo. Como resultado, escribirá el radio introducido, el área del circulo, y la longitud de su perímetro. Además, comprobará si el radio no es positivo, en cuyo caso obtendrá un mensaje informando sobre ello.

ENTRADA
Radio del circulo

SALIDAS
Si el radio no es positivo: mensaje de error

Si el radio es positivo: radio
			 área
			 longitud de la circunferencia

*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {

	//Declaración e inicialización de variables

	double radio = 0;
	const double PI = 3.1415; //Ajustamos PI a ese número
	double perimetro = 0;
	double area = 0;

	//Entrada de dato radio

	cout << "Bienvenido al programa de calculo de datos de un circulo."<< endl;
	cout << "Introduzca el valor del radio del circulo a calcular y este programa le devolverá el valor del área y el perímetro del circulo formado con él." << endl;
	cout << "Por favor, introduzca el valor del radio: ";
	cin >> radio;

	//Comprobación de que el radio es positivo

	if (radio < 0) {	//Caso de radio negativo
		
		cout << "\nEl dato introducido no es válido, el radio de un círculo no puede ser negativo." << endl;

	}

	if (radio >= 0) {	//Caso de radio positivo
		
		area = 	( PI * pow( radio , 2));
		
		perimetro = (2 * PI * radio);
	
		cout << "\n\tRadio = " << radio <<" unidades" << endl;
		cout << "\tÁrea = " << area << " unidades²" << endl;
		cout << "\tPerímetro = " << perimetro << " unidades" << endl;

	}
	
	cout << "\nGRACIAS POR USAR EL PROGRAMA\n" << endl;

}
