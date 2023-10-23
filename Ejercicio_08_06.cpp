// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 22/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 8

/* Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es
sim�trica */
#include <iostream>
#include <string>
using namespace std;

bool esSimetrica(const string&, int, int);

int main()
{
    string cadena;
    cout<<"Ingrese una cadena de caracteres: ";cin>>cadena;
    if (esSimetrica(cadena, 0, cadena.length()-1))
        cout<<"La cadena es simetrica"<<endl;
    else
        cout<<"La cadena NO es simetrica"<<endl;
    return 0;
}

bool esSimetrica(const string& cadena, int inicio, int fin)
{
    if (inicio>=fin)
        return true; // La cadena es sim�trica hasta este punto.
    if (cadena[inicio]!=cadena[fin])
        return false; // Los caracteres en los extremos no coinciden, no es sim�trica.
    // Llama a la funci�n con los caracteres interiores.
    return esSimetrica(cadena, inicio+1, fin-1);
}

