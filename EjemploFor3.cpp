/*Almacenar x cantidad de numeros e imprimir dichos numeros*/
#include <iostream>

using namespace std;

#define MAX 100

int vector[MAX];
int pos = 0;

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    int cant;
    int num;
    cout << "Dime cuantos numeros desea almacenar: ";
    cin >> cant;
    for (int i = 0; i < cant; i++)
    {
        cout << "Dime un numero: ";
        cin >> num;
        agregar(num);
        mostrar();
    }
    return 0;
}
void agregar(int num)
{
    vector[pos] = num;
    pos++;
}
void mostrar()
{
    for (int i = 0; i < pos; i++)
    {
        cout << vector[i] << endl;
    }
}
