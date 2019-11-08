/* EJERCICIO 2.3 página 51

Considere el ejemplo anterior eliminando las dos llaves de la sentecia if. Si el usuario ejecuta el programa con el dato 0, ¿que salida obtendrá?

solución: al quitar las llaves de if, el programa considera que solo contiene una sentencia, que es "cout << "Ha escrito " << dato << " que es distinto de cero" << endl;"
y dejaría " cout << "Es un alumno muy obediente" << endl;" fuera de la condición

*/

#include <iostream>
using namespace std;

int main () {
	int dato;
	
	cout << "Introduzca un valor entero distinto de cero" << endl;
	cin >> dato;
	if (dato!=0) 
	cout << "Ha escrito " << dato
	     << " que es distinto de cero" << endl;
	cout << "Es un alumno muy obediente" << endl;
	
	if (dato==0)
		cout << "Ups! que desobediente..." << endl;
}	
