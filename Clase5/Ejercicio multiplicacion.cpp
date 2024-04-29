//Generador de tablas de multiplicar

//Ingresar un numero del 1 al 9, mostrar cada uno de los renglones
//de su tabla de multiplicar

/*Ejemplo

Ingreso el 2

Mostrar por pantalla:

2*1 = 2
2*2 = 4
2*3 = 6

*/

#include <iostream>
#include <string>

using namespace std; 

int main (){
	int numero = 0;
	int contador = 1;
	

		
	while (contador <= 10){

		while (numero < 1 || numero > 9){
		cout << "Ingrese un numero" << endl;
		cin >> numero;
		
		}
		cout << "El contador es: " << contador << endl;		
		cout << numero * contador << endl;
		contador = contador +1;
	}
		
		return 0;
	
}

