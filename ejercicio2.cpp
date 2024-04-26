#include <iostream>

using namespace std;

void evaltriangulo(int ladoA , int ladoB, int ladoC){
    if (ladoA == ladoB && ladoB == ladoC){
        cout<< "triangulo equilatero" << endl;
        
     } else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
        cout << "triangulo isosceles"<< endl;
     }   
}

int main(int argc, char const *argv[])
{
    int LadoA, LadoB, LadoC;
    cout << "ingresa el lado A: ";
    cin >> LadoA;
    cout << "Ingrese el lado B: ";
    cin >> LadoB;
    cout << "Ingrese el lado C: ";
    cin >> LadoC;
    evaltriangulo(LadoA, LadoB, LadoC);
    return 0;
}