#include <iostream>

using namespace std;

int main() {
    // Declaraci�n de variables
    float base, altura, area, perimetro;

    // Solicitar al usuario que ingrese la base del rect�ngulo
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    // Solicitar al usuario que ingrese la altura del rect�ngulo
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    // Calcular el �rea del rect�ngulo
    area = base * altura;

    // Calcular el per�metro del rect�ngulo
    perimetro = 2 * (base + altura);

    // Mostrar los resultados
    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;
}
