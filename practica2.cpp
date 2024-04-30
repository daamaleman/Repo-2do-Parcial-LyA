#include <iostream>

using namespace std;

void evalTriangulo(int LadoA, int LadoB, int LadoC)
{
    if (LadoA == LadoB && LadoB == LadoC)
    {
        cout << "Triangulo Equilatero" << endl;
    }
    else if (LadoA == LadoB || LadoB == LadoC || LadoA == LadoC)
    {
        cout << "Triangulo Isoseles" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int LadoA, LadoB, LadoC;
    cout << "Ingrese el Lado A: ";
    cin >> LadoA;
    cout << "Ingrese el Lado B: ";
    cin >> LadoB;
    cout << "Ingrese el Lado C: ";
    cin >> LadoC;
    evalTriangulo(LadoA, LadoB, LadoC);
    return 0;
}
