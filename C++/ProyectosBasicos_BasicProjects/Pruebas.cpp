#include <iostream> 
#include <string>

using namespace std; // Para no escribir std:: al inicio.

int main(){
    cout << "Hola a todos desde c++" << endl;

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

    if (x > 10){
        cout << "x es mayor a 10" << endl;
    } else if (x == 10){
        cout << "x es igual a 10" << endl;
    } else {
        cout << "x es menor a 10" << endl;
    }

    string password;

    do{
        cout << "Ingrese su contrasenia: " << endl;
        getline (cin, password);

    } while(password != "prueba123");

    cout << "Bienvenido" << endl;

    return 0; // Indica que todo terminó sin errores
}