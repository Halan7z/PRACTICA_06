// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 4

// Problema planteado: Realizar un algoritmo recursivo que escriba al revés una cadena.
#include <iostream>
using namespace std;

void invertirCadena(string);

int main()
{
    string texto;
    cout<<"Ingrese una cadena de texto: ";getline(cin, texto);
    cout << "Cadena invertida: ";invertirCadena(texto);
    return 0;
}

void invertirCadena(string cadena)
{
    if (cadena.length()==0)
        return;
    else
    {
        // Imprimir el ultimo caracter de la cadena
        cout<<cadena[cadena.length()-1];
        // Llamar a la funcion con la cadena excluyendo el ultimo caracter
        invertirCadena(cadena.substr(0, cadena.length()-1));
    }
}
