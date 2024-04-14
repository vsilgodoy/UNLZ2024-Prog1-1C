#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    double centimetros, metros;

   // Solicitar al usuario que ingrese la longitud en centimetros
    cout << "Ingrese la longitud en centimetros";
    cin >> centimetros;

    // Calcular la longitud en metros
    metros = centimetros / 100;

    // Mostrar los resultados
    cout << "La longitud en metros es: " << metros << endl;

    return 0;
}
