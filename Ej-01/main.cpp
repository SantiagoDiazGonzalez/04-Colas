#include <iostream>
#include <string>
#include "../Cola/Cola.h"
using namespace std;

template <class T>
bool iguales(Cola<T> &a, Cola<T> &b){
    int i, xlen=1, ylen=1;
    char x[50], y[50];

    for(i=0; !a.esVacia(); i++){
        x[i]=a.desencolar();
        xlen++;
    }
    for(i=0; !b.esVacia(); i++){
        y[i]=b.desencolar();
        ylen++;
    }

    if(xlen != ylen) return false;
    else for(i=0; i<xlen; i++){
            if(x[i] != y[i])
                return false;
        }
    return true;
}

int main() {
    std::cout << "Ejercicio 04/01\n" << std::endl;

    int i;
    Cola<char> a, b;
    string A, B;

    cout << "ingrese cadena 1: "; cin >> A; cout << endl;
    cout << "ingrese cadena 2: "; cin >> B; cout << endl;

    for(i=0; i<A.length(); i++){ a.encolar(A[i]); }
    for(i=0; i<B.length(); i++){ b.encolar(B[i]); }

    if(iguales(a,b)) cout << "son iguales" << endl;
    else cout << "no son iguales" << endl;

    return 0;
}