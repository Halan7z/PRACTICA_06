// Materia: Programación I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023

// Número de ejericio: 7

/* Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
más en ser también productiva, ¿cuántos pares de conejos podrá poner a la
venta el granjero al cabo de un año? */
#include <iostream>
using namespace std;

int contarConejos(int );

int main()
{
    int meses=12; // valor variable
    int conejos=contarConejos(meses);
    cout<<"Despues de "<<meses<<" meses, el granjero tendra "<<conejos<<" pares de conejos para la venta"<<endl;
    return 0;
}

int contarConejos(int meses)
{
    if (meses<=2)
        return 1; // en los primeros dos meses, solo hay una pareja de conejos
    else
        // el numero de conejos en el mes actual es la suma de los conejos del mes anterior y el mes anterior a ese
        return contarConejos(meses-1)+contarConejos(meses-2);
}
