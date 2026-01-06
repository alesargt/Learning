#include <iostream> 
using namespace std; // Para no escribir std:: al inicio.

int main(){
    /*
        Para escribir una linea en consola, se usa el cout, pero para dejar una linea se usa el endl.
        Se puede usar un \n para cumplir la misma función. Siempre se dejan al final los endl y los
        \n se usan de por medio.
    */
    cout << "Hola a todos desde c++" << endl;

    /*
        Para declarar una variable se usa un tipo de variable como int, luego se escribe un signo
        igual (=) para idnicar a que será igual, se pueden usar valores de números o valores de tipo
        cadena o caracteres (String y Char).
    */
    int x = 5; 
    cout << "x: " << x << endl; 

    x = x+5;
    cout << "x: "<< x << endl;

    float y = 2.50;
    cout << "y: " << y << endl;

    float w = x + y;
    cout << "w: " << w << endl;

    int z = x + y; // Si doy entero y sumo junto a float, no aproxima solo usa enteros.
    cout << "z: " << z << endl;

    /*
        Condicionales, se realizan sus instrucciones si su condión se cumple. Para su uso se declara con:
        if (algo) y si no se cumple se usa un else. Si se quieren condiciones en especifico, por ejemplo:
        if (condición){instrucciones} else{lo que sucedera}. Si quiere una condicón extra pero especifica 
        se usa un else if(condición extra).

        Se pueden escribir dos condiciones a la vez, como if (x > 10 && y < 5), es una validación AND, o
        sea, que si ambas son verdaderas se realizarán las instrucciones si no, no, en cambio si se usa
        if (x > 10 || y < 5) es una validación OR donde con una sola que sea verdadera se realizará.

        Los if son condicionales booleanas, por lo tanto cumplen las reglas del álgebra booleana.
    */
    if (x > 10){
        cout << "x es mayor a 10" << endl;
    } else if (x == 10){
        cout << "x es igual a 10" << endl;
    } else {
        cout << "x es menor a 10" << endl;
    }

    return 0; // Indica que todo terminó sin errores
}