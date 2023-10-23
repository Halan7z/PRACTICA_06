// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023

// Número de ejericio: 2

/* Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38,
49,..., para n términos. */

#include <iostream>

using namespace std;

int digito(int);

int SumaTerminos(int);

int main()
{
    int terminos;
    cout<<"Ingrese la cantidad de terminos: ";cin>>terminos;
    for(int i = 1; i <= terminos; i++)
        cout<<digito(i)<<"\t";

    return 0;
}
int digito(int X){
    if(X == 1 || X == 2)
        return 1;
    else
        return SumaTerminos(digito(X - 1)) + digito(X - 1);
}


int SumaTerminos(int num)
{
    if(num == 0)
        num = 0;
    else
    return num % 10 + SumaTerminos(num / 10);
}


