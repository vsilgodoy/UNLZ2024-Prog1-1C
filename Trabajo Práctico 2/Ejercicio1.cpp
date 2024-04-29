//Desarrollar un programa que solicite al usuario ingresar tres números enteros y que
//imprima el mayor de los tres

#include <iostream>
#include <string>

using namespace std; 

int main (){
	int num1, num2, num3;
	int mayor;
	
	cout <<"Ingrese tres numeros: "<< endl;
	cin >> num1 >> num2 >> num3;
	
	if (num1 >= num2 && num1 >= num3){
	mayor = num1;
	} else if (num2 >= num1 && num2 >= num3){
	mayor = num2;
	} else {
	mayor = num3;
	}
	
	cout << "El numero mayor es " << mayor << endl;
	return 0;
}
