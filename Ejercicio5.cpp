#include <iostream>

using namespace std;

/*Leer un numero y obtener la tabla de 
multiplicacion de dicho numero*/

int main() {
    int num; 
    cout << "Ingrese un numero: ";
    cin >> num;

    int count = 1; 
    while (count <= 10) {
        cout << num << " x " << count << " = " << num * count << endl;
        count++; 
    }

    return 0;
}
