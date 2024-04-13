//Elabore un algoritmo en C++ para calcular el área y el perímetro de un rectángulo
solicitando los datos necesarios al usuario.

#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    float base, altura, area, perimetro;

    // Solicitar al usuario que ingrese la base del rectángulo
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    // Solicitar al usuario que ingrese la altura del rectángulo
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    // Calcular el área del rectángulo
    area = base * altura;

    // Calcular el perímetro del rectángulo
    perimetro = 2 * (base + altura);

    // Mostrar los resultados
    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;
}
