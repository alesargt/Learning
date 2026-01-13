#include <iostream>

using namespace std;

void ingresarValores (float &x, float &y){
    cout << "Ingrese el primer valor: ";
    cin >> x;

    cout << "Ingrese el segundo valor: ";
    cin >> y;
}

int main(){
    short opt = 0;
    float a = 0;
    float b = 0;

    while (opt != 5){
        cout << "*** MENU ***"
            << "\n1. Suma"
            << "\n2. Resta"
            << "\n3. Multiplicacion"
            << "\n4. Division"
            << "\n5. Salir"
            << "\n\nSeleccione: ";

        if (!(cin >> opt)){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Error, ingrese un numero entre 1 y 5.\n\n";
            continue;
        }

        switch (opt){
            case 1:
                ingresarValores(a, b);
                cout << "La suma es: " << a + b << "\n\n";
                break;
            case 2:
                ingresarValores(a, b);
                cout << "La resta es: " << a - b << "\n\n";
                break;
            case 3:
                ingresarValores(a, b);
                cout << "La multiplicacion es: " << a * b << "\n\n";
                break;
            case 4:
                ingresarValores(a, b);
                if (b == 0){
                    cout << "Division entre cero no esta definida\n\n";
                } else {
                    cout << "La division es: " << a / b << "\n\n";
                }
                break;
            case 5:
                cout << "\nSaliendo...\n";
                break;
            default:
                cout << "\nSu valor debe ser entre 1-5\n\n";              
        }
    }

    return 0;
}