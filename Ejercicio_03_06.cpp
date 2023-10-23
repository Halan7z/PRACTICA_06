// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 3

/* Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
suma de sus elementos */
#include <iostream>
#include <vector>

using namespace std;

int sumaVectorRecursivo(const vector<int>&, int);

int main()
{
    vector<int> numeros={5, 4, 7, 4, 5};
    int suma=sumaVectorRecursivo(numeros, numeros.size()-1);
    cout<<"La suma de los elementos del vector {5, 4, 7, 4, 5} es: "<<suma<<endl;
    return 0;
}

int sumaVectorRecursivo(const vector<int>& vector, int index)
{
    if (index==0)
        return vector[index];
    else
        return vector[index] + sumaVectorRecursivo(vector, index - 1);
}
