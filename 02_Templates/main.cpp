#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    cout << "Ejercicio 00/02\n" << endl;
    Calculadora<int> calInt;
    Calculadora<char> calChar;
    Calculadora<float> calFloat;

// calculadora de enteros

    calInt.setA(4);
    calInt.setB(5);

    cout << calInt.sumar() << endl;
    cout << calInt.dividir() << endl;

// calculadora de float

    calFloat.setA(4);
    calFloat.setB(5);

    cout << calFloat.sumar() << endl;
    cout << calFloat.dividir() << endl;

// calculadora de char

    calChar.setA(4);
    calChar.setB(5);

    cout << calChar.sumar() << endl;
    cout << calChar.dividir() << endl;

    return 0;
    
}