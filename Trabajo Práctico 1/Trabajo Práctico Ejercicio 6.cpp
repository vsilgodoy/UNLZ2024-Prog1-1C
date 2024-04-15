#include <iostream> 
#include <string>
 
using namespace std;

int main ()
{
	//Declarar las variables
	int cantSegundos = 0;
	int distancia = 0;
	const int velocidadSonido = 343;
	
	//Solicitar al usuario el diametro de la circunferencia
	cout << "Ingrese la cantidad de segundos cronometrada: "<< endl;
	cin >> cantSegundos;
	
	//Calcular el diametro, area y perimetro de la circunferencia
	distancia = cantSegundos * velocidadSonido;
	
	//Mostrar resultados
	 cout << "La distancia hasta el rayo es: " << distancia << endl;

	 
	 return 0;
	 
}
