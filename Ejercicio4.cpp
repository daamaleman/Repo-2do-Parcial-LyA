#include <iostream>

using namespace std;

/*Mostrar los primeros 300 numeros pares*/

int main()
{
    int i = 0, cont = 0;
    while (cont < 300)
    {
        i++;

        if (i % 2 == 0)
        {
            cont++;
            cout << cont << " ";
            cout << i << endl;
        }
    }

    return 0;
}
