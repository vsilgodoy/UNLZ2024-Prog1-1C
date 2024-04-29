//Desarrollar un programa que solicite al usuario ingresar un número del 1 al 7 y que
//imprima el día de la semana correspondiente. (Por ejemplo, si el usuario ingresa 1,
//imprimir "Lunes"; si ingresa 2, imprimir "Martes", etc.)

#include <iostream>
#include <string>

using namespace std; 

int main (){
	int numero;
	
	cout << "Ingrese un numero del 1 al 7: " << endl;
	cin >> numero;
	
	switch (numero){
		case 1:
		cout << "Hoy es Lunes " << endl;
		break;
		case 2:
		cout << "Hoy es Martes " << endl;
		break;
		case 3:
		cout << "Hoy es Miercoles " << endl;
		break;
		case 4:
		cout << "Hoy es Jueves " << endl;
		break;
		case 5:
		cout << "Hoy es Viernes " << endl;
		break;
		case 6:
		cout << "Hoy es Sabado " << endl;
		break;
		case 7:
		cout << "Hoy es Domingo " << endl;
		break;
		default:
		cout << "El numero ingresado no corresponde" << endl;
		break;
			
	}
	return 0;
}

