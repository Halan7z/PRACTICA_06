// Materia: Programaci�n I, Paralelo 1

// Autor: Alan Franz Flores Campos

// Fecha creaci�n: 22/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 11

/* Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un
entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
de Ullman (en honor al matem�tico Ullman) que consiste en lo siguiente:
� Empiece con cualquier entero positivo.
� Si es par, div�dalo entre 2; si es impar multipl�quelo por 3 y agr�guele 1.
� Obtenga enteros sucesivamente repitiendo el proceso.
Al final se obtendr� el n�mero 1, independientemente del entero inicial. Por
ejemplo, cuando el entero inicial es 26, la secuencia ser�:
26 13 40 20 10 5 16 8 4 2 1 */
#include <iostream>
using namespace std;

void conjeturaUllman(int);

int main()
{
    int numInicial;
    cout<<"Ingrese un entero positivo mayor que 1: ";cin>>numInicial;
    if (numInicial<=1)
    {
        cout<<"El entero inicial debe ser mayor que 1"<<endl;
        return 1;
    }
    cout<<"Secuencia de la conjetura de Ullman: ";
    conjeturaUllman(numInicial);
    cout<<endl;

    return 0;
}

void conjeturaUllman(int n)
{
    if (n<=1)
        cout<<"1 ";
    else
    {
        cout<<n<<" ";
        if (n%2==0)
            conjeturaUllman(n/2);
        else
            conjeturaUllman(3*n+1);
    }
}
