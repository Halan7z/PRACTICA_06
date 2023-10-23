// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 22/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 1

/* Problema planteado: . Realizar un algoritmo recursivo para calcular el m�ximo com�n divisor de dos
n�meros enteros aplicando el algoritmo de Euclides. */
#include <iostream>

using namespace std;

int calcularMCD(int, int);

int main()
{
    int num1, num2;

    cout<<"Introduzca el primer numero: ";cin>>num1;
    cout<<"Introduzca el segundo numero: ";cin>>num2;
    cout << "El Maximo Comun Divisor de " << num1 << " y " << num2 << " es: " <<calcularMCD(num1, num2)<< endl;
    return 0;
}

int calcularMCD(int a, int b)
{
    if (b==0)
        return a;
    else
        return calcularMCD(b, a % b);
}
