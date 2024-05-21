#include <iostream>
#include "variables.h"

using namespace std;

int main()
{
    PERSON teacher; // Declare the missing variable 'teacher'
    PERSON students[MAXREGISTERS];
    int op, i = 0;
    cout << "CIF: ";
    cin >> teacher.CIF;
    cout << "Nombre: ";
    scanf(" %[^\n]", teacher.name);
    cout << "Apellidos: ";
    scanf(" %[^\n]", teacher.lastname);

    do
    {
        system("cls||clear");
        printf("CIF: ");
        scanf(" %[^\n]", students[i].CIF);
        printf("Nombres: ");
        scanf(" %[^\n]", students[i].name);
        printf("Apellidos: ");
        scanf(" %[^\n]", students[i].lastname);
        printf("Nota: ");
        scanf(" %[^\n]", students[i].grade);

        printf("Desea agregar otro estudiante? 1=si, 0=no: ");
        cin >> op;
        i++;
    } while (op != 0);

    printf("Desea ingresar otra registro 1.- Si \n 0.- No \n");
    printf("Nombre completo: %s %s\n", teacher.name, teacher.lastname);
    cout << "Listado de estudiantes\n";

    for (int j = 0; j < i; j++) // Fix the loop condition from 'i' to 'j'
    {
        printf("Nombre: %s \n Apellidos: %s \n Nota: %s \n",
               students[j].name, students[j].lastname, students[j].grade);
    }

    return 0;
}
