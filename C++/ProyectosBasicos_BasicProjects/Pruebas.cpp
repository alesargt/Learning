#include <iostream>

using namespace std; // Esta linea no se usa en proyectos reales pero sirve para ejecutar este codigo de ejemplo

void parImpar (int x){
    cout << "*** PAR IMPAR ***\n";
    if (x % 2 == 0){
        cout << x << " es par\n\n";
    } else {
        cout << x << " es impar\n\n";
    }
}

void tablaMultiplicaciones (int y){
    cout << "*** TABLA DE MULTIPLICACIONES ***\n";

    for (int i = 1; i <= 10; i++){
        cout << y << " * " << i << " = " << y * i << "\n";
    }

    cout << "\n";
}

void pruebaNumero (int num){
    parImpar(num);
    tablaMultiplicaciones(num);
}

int main (){
    int miNumero = 5;
    pruebaNumero(miNumero);
}