#include <iostream>
#include "variables.cpp"

using namespace std;

//Prototipos
void start();
void menu();
void addAges();
void showAges();
void showMayor();
void showMenor();

//Funciones
void menu(){
    system("cls||clear");
    cout << "1- Agregar edades" << endl;
    cout << "2- Mostrar edades" << endl;
    cout <<"4- Mostrar edad mayor" << endl;
    cout << "5- Mostrar edad menor" << endl;
    cout << "6- Salir" << endl;
}

//Agregar edades
void addAges(){
    system("cls||clear");
    cout << "Dime la edas: ";
    cin >> ages[pos];
    pos++;
    system("pause");
}

void start(){
    int option;
    do{
        menu();
        cin >> option;
        switch(option){
            case 1:
                addAges();
                break;
            case 2:
                showAges();
                break;
            case 3:
                showMayor();
                break;
            case 4:
                showMenor();
                break;
            case 5:
                cout << "Adios" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                system("pause");
                break;
        }
    }while(option != 5);
}

void showAges(){
    system("cls||clear");
    cout << "Las edades son: " << endl;
    for(int i = 0; i < pos; i++){
        cout << ages[i] << endl;
    }
    system("pause");
}