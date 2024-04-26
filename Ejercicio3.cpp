#include <iostream>

using namespace std;

int main() {
    int distancia; // distancia recorrida en KM
    double precioSinImpuesto, precioConImpuesto; // precios a pagar

    cout << "Ingrese la distancia recorrida en KM: ";
    cin >> distancia;

    if (distancia <= 500) {
        precioSinImpuesto = 30.0;
    } else if (distancia <= 1000) {
        precioSinImpuesto = 30.0 + (distancia - 500) * 0.05;
    } else {
        precioSinImpuesto = 30.0 + (500 * 0.05) + (distancia - 1000) * 0.08;
    }

    precioConImpuesto = precioSinImpuesto * 1.15; // agregar 15% de IVA

    cout << "Precio a pagar sin impuesto: $" << precioSinImpuesto << endl;
    cout << "Precio a pagar con impuesto: $" << precioConImpuesto << endl;

    return 0;
}