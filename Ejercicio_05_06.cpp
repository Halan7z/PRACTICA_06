// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 5

// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales
#include <iostream>
#include <vector>
using namespace std;

bool sonVectoresIguales(const vector<int>&, const vector<int>&, int);

int main()
{
    vector<int> vector1 = {1, 2, 3, 4, 5};
    vector<int> vector2 = {1, 2, 3, 4, 5};

    // suponemos vectores son del mismo tamano
    if (vector1.size()!=vector2.size())
    {
        cout<<"Los vectores no son iguales"<<endl;
        return 0;
    }

    bool iguales=sonVectoresIguales(vector1, vector2, vector1.size()-1);
    if (iguales)
        cout<<"Los vectores son iguales"<<endl;
    else
        cout<<"Los vectores no son iguales"<<endl;
    return 0;
}

bool sonVectoresIguales(const vector<int>& vector1, const vector<int>& vector2, int index)
{
    // si hemos recorrido todos los elementos y no hemos encontrado diferencias, los vectores son iguales
    if (index==-1)
        return true;
    // si los elementos en la posicion actual son diferentes, los vectores no son iguales
    if (vector1[index]!=vector2[index])
        return false;
    // llamar a la funcion con el indice anterior
    return sonVectoresIguales(vector1, vector2, index-1);
}
