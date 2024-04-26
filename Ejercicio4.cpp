#include <iostream>

using namespace std;

void calcularPago(int numAlumnos, double &pagoCompania, double &pagoAlumno) {
    switch (numAlumnos) {
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
            pagoCompania = numAlumnos * 60.0;
            pagoAlumno = 60.0;
            break;
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
            pagoCompania = numAlumnos * 70.0;
            pagoAlumno = 70.0;
            break;
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
            pagoCompania = numAlumnos * 100.0;
            pagoAlumno = 100.0;
            break;
        default:
            pagoCompania = 4500.0;
            pagoAlumno = pagoCompania / numAlumnos;
            break;
    }
}

int main() {
    int numAlumnos;
    double pagoCompania, pagoAlumno;

    cout << "Menú de opciones:" << endl;
    cout << "1. Calcular pago" << endl;
    cout << "2. Salir" << endl;
    cout << "Ingrese una opción: ";
    int opcion;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese el número de alumnos: ";
            cin >> numAlumnos;
            calcularPago(numAlumnos, pagoCompania, pagoAlumno);
            cout << "Pago a la compañía de autobuses: $" << pagoCompania << endl;
            cout << "Pago por cada alumno: $" << pagoAlumno << endl;
            break;
        case 2:
            cout << "Saliendo..." << endl;
            return 0;
        default:
            cout << "Opción inválida. Intente nuevamente." << endl;
            main();
    }

    return 0;
}