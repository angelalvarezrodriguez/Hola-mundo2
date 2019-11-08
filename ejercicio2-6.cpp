/*EJERCICIO 2.6 página 53

Escriba un programa que lea tres número reales correspondientes a una ecuación de segunndo grado y escriba en la salida estándar la soluciones si las hay. Compruebe para ello si el discriminante es no negativo, y use una sentencia if/else para distinguir los dos casos

ENTRADAS 
a, b y c en consonacia con la formula ax² + bx + c = 0

SALIDAS
raices de la  ecuación o en su defecto un mensaje de error

*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	double a = 0;
	double b = 0;
	double c = 0;
	double discriminante = 0;
	double raiz1 = 0;
	double raiz2 = 0;

	cout << "PROGRAMA QUE RESUELVE ECUACIONES DE SEGUNDO GRADO" << endl;
	cout << "Por favor, introduzca valores para a, b y c siguiendo la estructura ax² + bx + c = 0." << endl;
	cout << "Valor de a: ";
	cin >> a;
	cout << "Valor de b: ";
	cin >> b;
	cout << "Valor de c: ";
	cin >> c;

	if ( a == 0 ) {
		
		raiz1 = ( c / b );

		cout << "Solo tiene una solución cuyo valor es: " << raiz1 << endl;

	}
	
	else {
	
		discriminante = (pow( b , 2) - ( 4 * a * c));

		if (discriminante < 0) {
			
			cout << "Esta ecuación no tiene soluciones en la recta real." << endl;

		}

		else {

			raiz1 = ( -b + sqrt(discriminante))/(2*a);

			raiz2 = ( -b - sqrt(discriminante))/(2*a);
			
			cout << "Las soluciones de la ecuación de segundo grado son: " << endl;
			cout << "x1 = " << raiz1 << endl;
			cout << "x2 = " << raiz2 << endl;

		}
		
	}
	
		cout << "GRACIAS POR USAR EL RESUELVE ECUACIONES" << endl;

}
