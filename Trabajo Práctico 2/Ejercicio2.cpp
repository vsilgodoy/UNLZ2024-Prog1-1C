//Desarrollar un programa que solicite el a�o de nacimiento de una persona, calcular su
//edad: Si la edad es mayor o igual a 18 a�os, imprimir "La persona es mayor de edad",
//de lo contrario, imprimir "La persona es menor de edad".

#include <iostream>
#include <string>

using namespace std; 

int main (){
	int nacimiento;
	int edad;
	
	if (edad >= 18){
	cout << "Ingrese su a�o de nacimiento " << endl;
	cin >> nacimiento;
	
	edad = 2024 - nacimiento;
	
		cout << "Usted es mayor de edad " << endl;
	} else {
		cout << "Usted es menor de edad " << endl;
	}
	return 0;
}
