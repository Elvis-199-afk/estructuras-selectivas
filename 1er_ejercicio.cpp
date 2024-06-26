#include <iostream>
using namespace std;

// Función para pedir y validar una calificación
float pedirCalificacion(string mensaje) {
    float calificacion;
    do {
        cout << mensaje;
        cin >> calificacion;
        if (calificacion < 0) {
            cout << "Introduzca números positivos" << endl;
        }
    } while (calificacion < 0);
    return calificacion;
}

// Función para calcular el promedio
float calcularPromedio(float c1, float c2, float c3) {
    return (c1 + c2 + c3) / 3;
}

// Función principal
int main() {
    float c1, c2, c3, promedio;

    c1 = pedirCalificacion("Introduce la primera calificación: ");
    c2 = pedirCalificacion("Introduce la segunda calificación: ");
    c3 = pedirCalificacion("Introduce la tercera calificación: ");

    promedio = calcularPromedio(c1, c2, c3);

    cout << endl;
    if (promedio >= 70) {
        cout << "===Aprobado===" << endl;
    } else {
        cout << "===Reprobado===" << endl;
    }

    return 0;
}

