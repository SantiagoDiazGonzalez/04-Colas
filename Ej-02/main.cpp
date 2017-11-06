#include <iostream>
#include "../Cola/Cola.h"
#include "../Cola/PIla.h"
#include <string>
using namespace std;

template <class T>
bool palindromo(Cola<T> &C, Pila<T> &P){
    int i, len=0;
    char x[200], y[200];

    for(i=0; !C.esVacia(); i++){
        x[i]=C.desencolar();
        len++;
    }

    for(i=0; !P.esVacia(); i++){
        y[i]=P.pop();
    }

    cout << "x= ";
    for(i=0; i<len; i++){
        cout << x[i];
    }

    cout << endl << "y= ";
    for(i=0; i<len; i++){
        cout << y[i];
    } cout << endl;

    for(i=0; i<len; i++){
        if(x[i] != y[i])
            return false;
    }
    return true;
}

int main() {
    std::cout << "Ejercicio 04/02\n" << std::endl;

    char t;
    int i;
    Cola<char> C;
    Pila<char> P;
    string palabra;

    cout << "ingrese la frase: ";
    getline(cin,palabra);
    cout << endl;

    for(i=0; i<palabra.length(); i++){
        if(palabra[i] != ' '){
            t = tolower(palabra[i]);
            if (t >= 'a' && t <= 'z') {
                C.encolar(t);
                P.push(t);
            }
        }
    }


    if(palindromo(C,P)) cout << "es palindromo" << endl;
    else cout << "no es palindromo" << endl;

    return 0;
}