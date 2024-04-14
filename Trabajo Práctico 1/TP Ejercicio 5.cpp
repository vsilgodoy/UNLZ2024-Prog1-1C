//Elabore un algoritmo en C++ para calcular el área y el perímetro de una circunferencia. Se debe solicitar al usuario el dato del radio y se debe definir la constante PI=3.141592.

#include <iostream> 

using namespace std;

int main ()
{
	//Declarar las variables
	float diametro, radio, area, perimetro;
	const float PI = 3.141592;
	
	//Solicitar al usuario el diametro de la circunferencia
	cout << "Ingrese el diametro de una circunferencia: ";
	cin >> diametro;
	
	//Calcular el diametro, area y perimetro de la circunferencia
	perimetro = PI * diametro;
	area = PI* (radio * radio);
	radio = diametro / 2;
	
	//Mostrar resultados
	 cout << "El area de la circunferencia es: " << area << endl;
	 cout << "El perimetro de la circunferencia es: " << perimetro << endl;
	 cout << "El radio de la circunferencia es: " << radio << endl; 
	 
	 return 0;
	 
}
