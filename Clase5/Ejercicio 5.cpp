//Desarrollar un programa que pida al usuario ingresar una contraseņa, 
//y se repita hasta que ingrese la contraseņa correcta.

#include <iostream>
#include <string>

using namespace std; 

int main (){
	
	string password = "atlantica";
	string valorIngresado = "";
	
	while (password != valorIngresado){
		cout<< "Ingrese una contraseņa"<< endl;
		
		cin >> valorIngresado;
	}
	return 0;
}
