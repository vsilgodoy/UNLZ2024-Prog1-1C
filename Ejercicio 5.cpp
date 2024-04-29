//Desarrollar un programa que pida al usuario ingresar una contraseña, 
//y se repita hasta que ingrese la contraseña correcta.

#include <iostream>
#include <string>

using namespace std; 

int main (){
	
	string password = "atlantica";
	string valorIngresado = "";
	
	while (password != valorIngresado){
		cout<< "Ingrese una contraseña"<< endl;
		
		cin >> valorIngresado;
	}
	return 0;
}
