# DOCUMENTACION PROPIA

En este documento estaré agregando mi documentación. No será la más adecuada pero será entendible para mi.

---
## Declarar variables

Para declarar una variable se necesita de varios datos, los datos necesarios son los siguientes:
* Tipo de dato (ver más adelante)
* Nombre (cualquera que uno desee)
* Cierre (punto y coma al final)

Como opcionales, está el darles asignación y valor, aunque si no se hace se les da uno por defecto, entonces:
* Asignacón (=)
* Valor (Depende del tipo de dato que sea, no se pone int nameVar = 'a', cada cual con lo que es)

El orden sería tipoDato nombre = datoAsignado. Por ejemplo:
* Asignación default: int var;
* Asignación dada: int var = 5;

En código se vería así:
``` C++
    int num = 5;
```

---
## Tipos de datos

### Numéricos

* long: Tienen 64bits, se parten a la mitad igual que el resto, desde -2^32 a +2^32 -1 incluyendo el cero.

* int: Son valores que se almacenan en 32bits, lo cual les permite tener un 2^32 espacios disponibles. Eso va de la mano a conocimientos, 2^32 = 4,294,967,296 valores, pero este se parte en dos valores, positivos y negativos, donde los valores positivos van de 0 hasta +2,147,483,647 y los negativos van de -1 hasta -2,147,483,648. Eso quiere decir que los valores totales siempre se parten a la mitad, para la mitad será positiva y la otra mitad será negativa completamente.

* short: Son valores que se almacenan en 16bits, por lo cual es un 2^16 de espacios, pero igual que en los int estos se parten a la mitad para positivos y mitad negativos, o sea de -32,768 hasta +32,767.

* char: Es un byte, por lo que hay 2^8 valores, mitad positiva y mitad negativa desde los valores -128 a +127.

* float y double: Almacenan valores decimales, el float tiene menos valores que el double.

### Textos

Para los textos, hay diferentes, ya sean caracteres o arreglos de carcateres, paso a paso. Qué es un arreglo? Un arreglo es como una caja con posiciones, que inicia desde el espacio 0 hacia adelante. Un tipo de dato como lo es char, es un arreglo de un solo espacio, o sea un texto de un solo caracter. Luego se pueden hacer arreglos de tipo char los cuales almacenen cadenas de un tamaño definido. Si se quieren almacenar cadenas en general pero no se saben los tamaños lo mejor es usar un dato string, ya que cumplen lo requerido pero estos consumen más espacio en memoria.
* char
* array
* string

### Booleanos

Los booleanos al igual que en álgebra booleana son de verdadero o falso (ceros y unos).
* bool

---
## Condicionales

Las condicionales como su nombre lo indica, son cosas que deben cumplirse para que se pueda ejecutar, cuando se coloca un if quiere decir que si se cumple se ejecuta el código si no, se ejecuta otra cosa o simplmente no sucede nada, por ejemplo:

``` C++
if (num > 0){
    cout << "Su numero es positivo" << endl;
}
```

Esto se separa en varias partes. Primero se ve que si se cumple algo sucede lo siguinete. Parte por parte sería se define que habrá condición "if" luego se coloca la condición "(condición)" y luego el bloque de código que se va a ejecutar "{bloque de código a ejecutar}". Ahora, qué sucede si la condión no se cumple, no es necesario que esté pero si se quiere tomar en cuenta se usa la palabra reservada "else" lo cual indica, si lo anterior no se cumple entonces es esto. Ejemplo:

``` C++
if (num > 0){
    cout << "Su numero es positivo" << endl;
} else {
    cout << "Su numero es negativo" << endl;
}
```
En esta parte el else no lleva condición ya que al final solo es, lo que sucede si no se cumple la condición o condiciones iniciales. Con esto su estructura es básica, si no se cumple lo anterior "else" que se ejecute esto "{bloque de código a ejecutar}". También hay condiciones especiales, supongamos que queremos que en nuestro ejemplo si alguien escribe el cero, ese valor no es negativo, es neutro; sabiendomlo anterior podemos hacer que se corra una condión extra:

``` C++
if (num > 0){
    cout << "Su numero es positivo" << endl;
} else if (num == 0){
    cout << "Su numero es neutro" << endl;
} else {
    cout << "Su numero es negativo" << endl;
}
```

En este nuevo código a la mitad se ejecuta una nueva condicón que tiene la misma estructura que el if pero ejecuta algo diferente.

### Signos de condicionales
* <: menor que
* <=: menor o igual que
* \> mayor que
* \>= mayor o igual que
* == igual que
* != distinto que
* && y (unión, dos o varias condiciones se deben cumplir al mismo tiempo para ejecutar código)
* || o (con que una condición se cumpla, se ejecuta código sin importyar si hay más)

---
## Ciclos

Los ciclos, son tareas que se ejecutan mientras alguna o algunas condiciones se estén cumpliendo, una vez se cumplan ya no se ejecutan.

### Ciclo for

El ciclo for es un ciclo el cual se ejecuta cuando sabemos cuántas veces se va a repetir, o de otra forma, las veces que queremos que algo se repita, supóngase que se quiere imprimir los números del 1 al 10, sabemos desde que valor inicia hasta el valor que termina. Su estructura es la siguiente: for (int var = valor; condición; var++ ó var--){bloque de código a ejecutar}. Antes de verlo en código se deben explicar unos detalles, las dondiciones siempre deben estar en términos de 'var' ya que se ejecutarán los ciclos de manera definida, y el var++ ó var-- quiere decir lo siguiente:

* var++ quiere decir que var estará aumentando de 1 en 1, esto se puede cambiar, por ejemplo var + 2, eso sería que var aumenta 2 cada que se vuelva a ejecutar el ciclo, por lo general se hace de 1 en 1, pero se puede cambiar.
* var-- funciona de manera inversa a var++ ya que este en vez de aumenatr de 1 en 1, disminuye de 1 en 1.

Lo anterior es importante, ya que si no se actualiza el valor se repetiría infinitamente.

Ejemplo de código que escribe en consola los números del 1 al 10:

``` C++
for (int i = 1; i <= 10; i++){
    cout << i << endl;
}
```

### Ciclo while

Este es muy similar al for en esencia, pero con un cambio claro, este se va a repetir siempre que la condición se cumpla, o sea, el for esta definido con un límite desde el inicio, mientras que el while se va a ejecutar siempre y cuando la condición esté en proceso, ejemplo:

Código que imprime del 1 al 5:

``` C++
int num = 1;
while (num <= 5){
    cout << i << endl;
    i++;
}
```

Algo a mencionar, si o si, debe haber cambio de la condición dentro del código que se va a ejecutar, ya sea que el valor si es númerico aumente o disminuya en el bloque, o que si es algún valor que el usuario deba ingresar se le esté solicitando dentro del código. Si no se actualiza el ciclo este se va a repetir infinitamente.

### Ciclo do while

Es igual que el ciclo while, pero este tiene como condición previa, que se va a ejevutar al menos una vez, egenralmente sirve para escribir alertas, supongamos que cuando alguien ingresa a un sistema, se le quiere solicitar un valor, pero si se usa un ciclo for dicha alerta se ejecutaría una cantidad de veces; si se usa while pero no se ha definido el valor el ciclo no se ejecuta.

Código que solicita la contraseña, y deja pasar hasta que se cumpla:

``` C++
string password;

do {
    cout << "Ingrese su contrasenia: " << endl;
    getline(cin, password)
} while(password != "prueba123");
```