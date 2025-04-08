#include <iostream>
using namespace std;

int main() {
    int edad;

    // Solicitar la edad al usuario
    cout << "Ingrese su edad: ";
    cin >> edad;

    // Verificar si es mayor o menor de edad
    if (edad >= 18) {
        cout << "Usted es mayor de edad." << endl;
    } else {
        cout << "Usted es menor de edad." << endl;
    }

    return 0;
}
