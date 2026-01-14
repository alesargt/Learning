/*
    Retos lógicos
    1. Par e impar
    2. Inversión de números (si me dan: 587 debo escribir 785, sin string, solo validar enteros positivos)
    3. Número primo
    4. Serie de Fibonacci (Iteraciones que pida el usuario)
    5. Adivina el número (1-100)
*/

#include <iostream>

using namespace std;

// Tardé 2 minutos
void parImpar (const int num){
    cout << "*** PAR E IMPAR ***\n";

    if (num % 2 == 0){
        cout << num << " es par\n\n";
    } else {
        cout << num << " es impar\n\n";
    }
}

/*
    Tardé 90 minutos 
    Los primero 50 minutos hice que funcionara pero no tomaba en cuenta números negativos. También tenía muchas variables en uso, por ejemplo 
    dos float, cuatro enteros, entonces era muy largo, al igual que tenía muchos cout ya que hice pruebas para ver que el ciclo usara bien mis
    divisiones ya que antes sacaba el numEntero y el numDecimal y con un numAux conseguía la resta para obtener el decimal, y ese valor lo
    multiplicaba por diez para obtener el numero del final, y luego hacía sumas y multiplicaciones para que se fueran agrupando, ejemplo:
    592, primer entero obtenido el 2, luego si encontraba que la divEntera era >0 seguia trabajando pero eran muchas líneas para algo sencillo
    entonces quise estar optimizando todo, y llegué a la versión final donde ya fundionaba todo sin muchas variables. Para ello tomé 40 minutos
    extra
*/
void inversionNumeros (int num){
    cout << "*** INVERSION DE NUMEROS ***\n";

    int numInvertido = 0;

    if (num < 0){
        cout << "\nError: " << num << " es negativo, use un valor positivo\n\n";
        return;
    }

    cout << "Su numero sin invertir es: " << num;

    if (num < 10){
        cout << "\nSu numero invertido es: " << num << "\n\n";
        return;
    }

    while (num > 0){
        numInvertido = numInvertido * 10 + (num % 10);
        num /= 10;
    }

    cout << "\nSu numero invertido es: " << numInvertido << "\n\n";
}

// Tardé 45 minutos
void numPrimo (const int num){
    cout << "*** NUMERO PRIMO ***\n";

    short divisor = 2;

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

    cout << num << " es primo";
}

// Tardé 15 minutos
void serieFibonacci (const int valor){
    cout << "*** SERIE DE FIBONACCI ***\n";

    int aux;
    int base1 = 0;
    int base2 = 1;
    short iteracion = 1;

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

// Tardé 25 minutos
void adivinaNumero(const int valor){
    cout << "*** ADIVINA EL NUMERO ***\n";

    short numIngresado = 0;
    short intentos = 1;

    cout << "El numero puede ser entre 1-100\n";

    while (intentos < 6){
    cout << "Este es tu intento: " << intentos << " de 5\n"
        << "Ingrese un numero: ";

        cin >> numIngresado;

        if (numIngresado > valor){
            cout << "\n" << numIngresado << " es mayor al numero que buscas\n\n";
            intentos++;
        } else if(numIngresado < valor){
            cout << "\n" <<numIngresado << " es menor al numero que buscas\n\n";
            intentos++;
        } else {
            cout << "\nLO ADIVINASTE, FELICIDADES!!!\n\n";
            return;
        }
    }
    cout << "PERDISTE :c\n\n"; 
}

int main (){
    int valor = 2;
    //parImpar(valor);
    //inversionNumeros(valor);
    //numPrimo(valor);
    //serieFibonacci(valor);
    //adivinaNumero(valor);
}