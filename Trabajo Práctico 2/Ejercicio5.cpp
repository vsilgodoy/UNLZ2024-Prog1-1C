//Desarrollar un programa que solicite al usuario ingresar un carácter y que determine si
//es una vocal o una consonante.

#include <iostream>
#include <string>

using namespace std; 

int main (){
	char letra;
	
	cout << "Ingrese una letra " << endl;
	cin >> letra;
	switch (letra){
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		cout << "La letra ingresada es una vocal" << endl;
		break;
		default:
		cout << "La letra ingresada es una consonante" << endl;
		break;
	}	
	return 0;
}

