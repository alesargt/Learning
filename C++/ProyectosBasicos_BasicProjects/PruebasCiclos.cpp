#include <iostream>

using namespace std;

int main(){
    /*
    //Serie de Fibonacci con ciclo For
    //Bases para la sucesión de Fibonacci, la primera iteración y segunda iteración siempre son Ite1 = 0, Ite2 = 1, luego inicia la serie de F.
    
    int base1 = 0;
    int base2 = 1;
    int sum = 0;

    cout << "SERIE DE FIBONACCI" << endl;
    cout << "Ite1: " << base1 << endl;
    cout << "Ite2: " << base2 << endl;

    for (int i = 3; i <= 7; i++){
        sum = base1 + base2;

        cout << "Ite" << i << ": " << sum << endl;

        base1 = base2;
        base2 = sum;
    }
    */

    /*
    // Serie de Fibonacci con ciclo do while y consola
    int base1 = 0;
    int base2 = 1;
    int sum = 0;
    int iterations = 0;
    int iterationsSelect = 0;

    cout << "Cuantas iteraciones de la serie de F quieres? ";
    cin >> iterationsSelect;
    cout << "\nSERIE DE FIBONACCI" << endl;

    do{
        iterations++;

        if (iterations == 1){
            cout << "Iteracion " << iterations << ": " << base1 << endl;
        } else if (iterations == 2){
            cout << "Iteracion " << iterations << ": " << base2 << endl;
        } else {
            sum = base1 + base2;

            cout << "Iteracion " << iterations << ": " << base1 << " + " << base2 << " = " << sum << endl;

            base1 = base2;
            base2 = sum;
        }
    } while(iterations != iterationsSelect);
    */
   
    return 0;
}