/* DISEÑO DE CONDICIONES : Expresiones booleanas y condiciones

Ejercicio 2.10
Escribir la expresiones booleanas que corresponden a las siguientes afirmaciones:


Programa para comprobar su uso*/

#include <iostream>
using namespace std;

int main () {

	//Enunciado del ejercicio
	cout << "\nEjercicio 2.10: \nEscribir las expresiones booleanas que corresponden a las siguientes condiciones:" << endl;

	//1. El valor del entero A está en {1,2,3,4,5,6}

	cout << "\t1. El valor del entero A está en {1,2,3,4,5,6}: " << endl;
	cout << "\n\tSolución: ((A >= 1) && (A <= 6 ))" <<  endl;

	//COMPROBACIÓN

	cout << "\n\t¡¡¡COMPROBACIÓN!!!" << endl;
	//Declaramos las variables a usar

	int numero1=0; //La variable entera que vamos a usar
	bool prueba1 = false; //La variable lógica

	//Introduciomos número entero que queremos comprobar
	cout << "\tPor favor, introduzca el valor del número entero A: ";	 
	cin >> numero1;

	//Escribimos la  expresion booleana
	prueba1 = ( numero1 >= 1 && numero1 <=6 );
	
	//Salida de la operación
	cout << "\t¿El valor del entero A está en {1,2,3,4,5,6}?: " << prueba1 << endl;


	//2. El valor real de A está en [-∞,-5] ∪ [5,∞]

	cout << "\n\n\t2. El valor real de A está en [-∞,-5] ∪ [5,∞]: " << endl;
	cout << "\n\tSolución: ((A <= -5) || (A >= 5 ))" <<  endl;

	//COMPROBACIÓN

	cout << "\n\t¡¡¡COMPROBACIÓN!!!" << endl;
	//Declaramos las variables a usar

	double numero2=0; //La variable real que vamos a usar
	bool prueba2 = false; //La variable lógica

	//Introduciomos número real que queremos comprobar
	cout << "\tPor favor, introduzca el valor del número real A: ";	 
	cin >> numero2;

	//Escribimos la  expresion booleana
	prueba2 = ((numero2 <= -5) || (numero2 >= 5 ));
	
	//Salida de la operación
	cout << "\t¿El valor real de A está en [-∞,-5] ∪ [5,∞]?:"<< prueba2 << endl;


	//3. El valor real de A no está en [-5,3]

	cout << "\n\n\t2. El valor real de A no está en [-5,3]: " << endl;
	cout << "\n\tSolución: ((A < -5) || (A > 3 ))" <<  endl;

	//COMPROBACIÓN

	cout << "\n\t¡¡¡COMPROBACIÓN!!!" << endl;
	//Declaramos las variables a usar

	double numero3=0; //La variable real que vamos a usar
	bool prueba3 = false; //La variable lógica

	//Introduciomos número entero que queremos comprobar
	cout << "\tPor favor, introduzca el valor del número real A: ";	 
	cin >> numero3;

	//Escribimos la  expresion booleana
	prueba3 = (( numero3 < -5) || ( numero3 > 3 ));
	
	//Salida de la operación
	cout << "\t¿El valor real de A no está en [-5,3]?: "<< prueba3 << endl;


	//4. El valor real de A está en {1,2,3} ∪ [10,20[

	cout << "\n\n\t4. El valor real de A está en {1,2,3} ∪ [10,20[: " << endl;
	cout << "\n\tSolución: ((A == 1.0) || (A == 2.0) || (A == 3.0)) || ((A >=10) && (A < 20))" <<  endl;

	//COMPROBACIÓN

	cout << "\n\t¡¡¡COMPROBACIÓN!!!" << endl;
	//Declaramos las variables a usar

	double numero4=0; //La variable real que vamos a usar
	bool prueba4 = false; //La variable lógica

	//Introduciomos número real que queremos comprobar
	cout << "\tPor favor, introduzca el valor del número real A: ";	 
	cin >> numero4;

	//Escribimos la  expresion booleana
	prueba4 = ((( numero4 >= 1) && ( numero4 <= 3 )) || (( numero4 >=10) && ( numero4 < 20)));
	
	//Salida de la operación
	cout << "\t¿4. El valor real de A está en {1,2,3} ∪ [10,20[?: "<< prueba4 << endl;


	//5. El valor del entero A es par o un valor impar entre cero y diez

	cout << "\n\n\t5. El valor del entero A es par o un valor impar entre cero y diez: " << endl;
	cout << "\n\tSolución: ((A % 2) == 0) || ((A % 2 !=0) && ((A >= 0) && (A <= 10)))" <<  endl;

	//COMPROBACIÓN

	cout << "\n\t¡¡¡COMPROBACIÓN!!!" << endl;
	//Declaramos las variables a usar

	int numero5=0; //La variable entera que vamos a usar
	bool prueba5 = false; //La variable lógica

	//Introduciomos número entero que queremos comprobar
	cout << "\tPor favor, introduzca el valor del número entero A: ";	 
	cin >> numero5;

	//Escribimos la  expresion booleana
	prueba5 = (( numero5 % 2) == 0) || ((numero5 >= 0) && (numero5 <= 10));
	
	//Salida de la operación
	cout << "\t5. ¿El valor del entero A es par o un valor impar entre cero y diez?: "<< prueba5 << endl;


	//6. El valor del real A está en [0,10] ∪ [20,30]

	cout << "\n\n\t6. El valor del real A está en [0,10] ∪ [20,30]: " << endl;
	cout << "\n\tSolución: ((A >= 0) && (A <= 10)) || ((A >=20) && (A <= 30))" <<  endl;

	//COMPROBACIÓN

	cout << "\n\t¡¡¡COMPROBACIÓN!!!" << endl;
	//Declaramos las variables a usar

	double numero6=0; //La variable real que vamos a usar
	bool prueba6 = false; //La variable lógica

	//Introduciomos número real que queremos comprobar
	cout << "\tPor favor, introduzca el valor del número real A: ";	 
	cin >> numero6;

	//Escribimos la  expresion booleana
	prueba6 = ((numero6 >= 0) && (numero6 <= 10)) || ((numero6 >=20) && (numero6 <= 30));
	
	//Salida de la operación
	cout << "\t6. ¿El valor del real A está en [0,10] ∪ [20,30]?: "<< prueba6 << endl;


	//7.  El valor del real A no está en [0,10[ ∪ ]20,30]

	cout << "\n\n\t7. El valor del real A no está en [0,10[ ∪ ]20,30]: " << endl;
	cout << "\n\tSolución: !(((A >= 0) && (A < 10)) || ((A >20) && (A <= 30)))" <<  endl;

	//COMPROBACIÓN

	cout << "\n\t¡¡¡COMPROBACIÓN!!!" << endl;
	//Declaramos las variables a usar

	double numero7=0; //La variable real que vamos a usar
	bool prueba7 = false; //La variable lógica

	//Introduciomos número real que queremos comprobar
	cout << "\tPor favor, introduzca el valor del número real A: ";	 
	cin >> numero7;

	//Escribimos la  expresion booleana
	prueba7 = !(((numero7 >= 0) && (numero7 < 10)) || ((numero7 >20) && (numero7 <= 30)));
	
	//Salida de la operación
	cout << "\t7. ¿El valor del real A no está en [0,10[ ∪ ]20,30]?: "<< prueba7 << endl;

	cout << "\nGRACIAS GOLF@S" << endl;
}	

