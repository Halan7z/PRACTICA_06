// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 19/10/2023

// Fecha modificaci�n: 19/10/2023

// N�mero de ejericio: 6

// Problema planteado: Realizar un algoritmo recursivo para la siguiente funci�n: .........
#include <iostream>
#include <wchar.h>

using namespace std;

unsigned int algoritmo(unsigned int);

int main()
{
    unsigned int n;
    setlocale(LC_ALL, "");
    cout << "Ingrese un valor: ";
    cin >> n;
    cout << "El algoritmo es: " << algoritmo(n) << endl;
    return 0;
}

unsigned int algoritmo(unsigned int n)
{
    if (n == 1)
        n = 1;
    else
        n = (algoritmo(n-1))+(n*n);
    return n;
}
