/*
contador de pares y contador de impares

Esperar por pantalla N numeros
Contar cantidad de pares ingresados
Contar cantidad de impares ingresados
Cortar ciclo cuando se ingrese un 0

Mostrar valor de contador por pantalla

*/

#include <iostream>
#include <string>

using namespace std; 

int main (){
	
	int numero = 1;
	int contadorPar = 0;
	int contadorImpar = 0;
	
	while (numero != 0){
		
	cout << "Ingrese un numero " << endl;
	cin >> numero;
	
	if (numero % 2 == 0){
		contadorPar= contadorPar +1;
		
	}else {
		contadorImpar = contadorImpar +1;
		
	}
	}
	contadorPar= contadorPar -1;
	 cout <<"El valor del contadorPar es: "<< contadorPar << endl;
	 cout <<"El valor del contadorImpar es: "<< contadorImpar << endl;
	 
	return 0;
	
}
