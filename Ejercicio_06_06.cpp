// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023

// Número de ejericio: 6

// Problema planteado: Realizar un algoritmo recursivo para la siguiente función: .........
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
