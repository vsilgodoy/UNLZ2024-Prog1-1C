//Elabore un algoritmo en C++ para calcular el �rea y el per�metro de un tri�ngulo equil�tero solicitando los datos necesarios al usuario.

#include <iostream>

using namespace std;

int main ()
{
	//Declaracion de variables
	float area, lado, perimetro;
	
	//Solicitar al usuario que ingrese el lado del traingulo equilatero
	cout << "Ingrese el lado del triangulo equilatero: ";
	cin >> lado;
	
	
	//Calcular el area y perimetro del triangulo
	area = lado * lado;
	perimetro = 3 * lado;
	
	//Mostrar resultados
	cout << "Ingrese el area del triangulo: " << area << endl;
	cout << "Ingrese el perimetro del triangulo: " << perimetro << endl;
	
	return 0;
	
}
