//Desarrollar un programa que pida al usuario ingresar una contrase�a, 
//y se repita hasta que ingrese la contrase�a correcta.

#include <iostream>
#include <string>

using namespace std; 

int main (){
	
	string password = "atlantica";
	string valorIngresado = "";
	
	while (password != valorIngresado){
		cout<< "Ingrese una contrase�a"<< endl;
		
		cin >> valorIngresado;
	}
	return 0;
}
