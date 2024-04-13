//Elabore un algoritmo en C++ para convertir pesos argentinos a dólares
estadounidenses. La cantidad de pesos y la cotización deberán ser solicitadas al
usuario.
    
#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    long double pesos_argentinos, dolares_estadounidenses, cotizacion;

    // Solicitar al usuario que ingrese los pesos argentinos
    cout << "Ingrese los pesos argentinos: ";
    cin >> pesos_argentinos;
    
    // Solicitar al usuario que ingrese la cotizacion de los dolares estadounidenses
    cout << "Ingrese la cotizacion del dolar estadounidense: ";
    cin >> dolares_estadounidenses;

    // Calcular la cotizacion
    cotizacion = pesos_argentinos / 1000;

    // Mostrar los resultados
    cout << "La cotizacion de los pesos argentinos es de: " << cotizacion << endl;

    return 0;
} 
