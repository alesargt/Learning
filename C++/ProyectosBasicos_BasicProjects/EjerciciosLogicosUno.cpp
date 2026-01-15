/*
    Retos lógicos
    1. Par e impar
    2. Inversión de números (si me dan: 587 debo escribir 785, sin string, solo validar enteros positivos)
    3. Número primo
    4. Serie de Fibonacci (Iteraciones que pida el usuario)
    5. Adivina el número (1-100)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Tardé 2 minutos -- 2 minutos más en arreglos nuevos
void parImpar (){
    int num;

    cout << "*** PAR E IMPAR ***\n"
        << "Que numero quiere probar: ";
    cin >> num;

    if (num % 2 == 0){
        cout << num << " es par\n\n";
    } else {
        cout << num << " es impar\n\n";
    }
}

/*
    Tardé 90 minutos -- 2 minutos más en arreglos nuevos
    Los primero 50 minutos hice que funcionara pero no tomaba en cuenta números negativos. También tenía muchas variables en uso, por ejemplo 
    dos float, cuatro enteros, entonces era muy largo, al igual que tenía muchos cout ya que hice pruebas para ver que el ciclo usara bien mis
    divisiones ya que antes sacaba el numEntero y el numDecimal y con un numAux conseguía la resta para obtener el decimal, y ese valor lo
    multiplicaba por diez para obtener el numero del final, y luego hacía sumas y multiplicaciones para que se fueran agrupando, ejemplo:
    592, primer entero obtenido el 2, luego si encontraba que la divEntera era >0 seguia trabajando pero eran muchas líneas para algo sencillo
    entonces quise estar optimizando todo, y llegué a la versión final donde ya fundionaba todo sin muchas variables. Para ello tomé 40 minutos
    extra
*/
void inversionNumeros (){
    int num;
    int numInvertido = 0;

    cout << "*** INVERSION DE NUMEROS ***\n"
        << "Que numero quiere probar: ";
    cin >> num;    

    cout << "\nSu numero sin invertir es: " << num << "\n";

    if (num < 0){
        cout << "Error: " << num << " es negativo, use un valor positivo\n\n";
        return;
    } else if (num < 10){
        cout << "Su numero invertido es: " << num << "\n\n";
        return;
    }

    while (num > 0){
        numInvertido = numInvertido * 10 + (num % 10);
        num /= 10;
    }

    cout << "Su numero invertido es: " << numInvertido << "\n\n";
}

// Tardé 45 minutos -- 2 minutos más en arreglos nuevos
void numPrimo (){
    int num;
    int divisor = 2;

    cout << "*** NUMERO PRIMO ***\n"
        << "Ingrese su numero: ";
    cin >> num;    

    if (num < 0){
        cout << "Error " << num << " es negativo, use numeros positivos\n\n";
        return;
    } else if (num <= 1){
        cout << num << " no es primo\n\n";
        return;
    }

    while (divisor != num){
        if (num % divisor == 0){
            cout << num << " no es primo\n\n";
            return;
        }

        divisor++;
    }

    cout << num << " es primo" << "\n\n";
}

// Tardé 15 minutos -- 2 minutos más en arreglos nuevos
void serieFibonacci (){
    int valor;
    int aux;
    int base1 = 0;
    int base2 = 1;
    int iteracion = 1;

    cout << "*** SERIE DE FIBONACCI ***\n"
        << "Ingrese la cantidad de iteraciones que desea ver de la seri de F: ";
    cin >> valor;

    while (iteracion <= valor){
        if (iteracion == 1){
            cout << "Iteracion " << iteracion << ": " << base1 << "\n";
            iteracion++;
        } else if (iteracion == 2){
            cout << "Iteracion " << iteracion << ": " << base2 << "\n";
            iteracion++;
        } else {
            aux = base1 + base2;
            cout << "Iteracion " << iteracion << ": " << base1 << " + " << base2 << " = " << aux << "\n";

            base1 = base2;
            base2 = aux;
            
            iteracion++;
        }
    }

    cout << "\n";
}

// Tardé 25 minutos -- 10 minutos más en arreglos nuevos
void adivinaNumero(){
    srand(time(NULL));
    int num = (rand() % 100) + 1; 
    int numIngresado = 0;
    int intentos = 1;

    cout << "*** ADIVINA EL NUMERO ***\n"
        << "El numero puede ser entre 1-100\n";

    while (intentos < 7){
    cout << "Este es tu intento: " << intentos << " de 6\n"
        << "Ingrese un numero: ";

        cin >> numIngresado;

        if (numIngresado > num){
            cout << "\n" << numIngresado << " es mayor al numero que buscas\n\n";
            intentos++;
        } else if(numIngresado < num){
            cout << "\n" <<numIngresado << " es menor al numero que buscas\n\n";
            intentos++;
        } else {
            cout << "\nLO ADIVINASTE, FELICIDADES!!! el numero era el: " << num << "\n\n";
            return;
        }
    }
    cout << "PERDISTE :c el numero era: " << num << "\n\n"; 
}

// Tardé 2 minutos
void menu(){
    cout << "*** MENU ***\n"
    << "1. Par/impar\n"
    << "2. Invertir numeros\n"
    << "3. Numero primo\n"
    << "4. Serie de Fibonacci\n"
    << "5. Adivina el numero\n"
    << "6. Salir\n\n"
    << "Elija lo que desea hacer: ";
}

// Tardé 40 minutos
void eleccionMenu (const int x){
    switch (x){
        case 1: 
            parImpar();
            break;
        case 2:
            inversionNumeros();
            break;
        case 3:
            numPrimo();
            break;
        case 4:
            serieFibonacci();
            break;
        case 5:
            adivinaNumero();
            break;
        case 6:
            cout << "Saliendo...\n";
            break;                     
    }
}

int main (){
    int opt = 0;

    while (opt != 6){
        menu();

        cin >> opt;

        cout << "\n";

        eleccionMenu(opt);
    }

    return 0;
}