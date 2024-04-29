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
	
	int contador = 0;
	int numero = 0;
	
	cout << "Ingrese un numero" << endl;
	cin >> numero;
		
	while (contador < 10){
		
		contador = contador +1;
		//resultado = numero * contador;
		
		cout << "numero" << "*" << contador << "=" << numero * contador  << endl;
		
	}
	return 0;
}
