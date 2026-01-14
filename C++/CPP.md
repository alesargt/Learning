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

* *long* Tienen 64bits, se parten a la mitad igual que el resto, desde -2^32 a +2^32 -1 incluyendo el cero.

* *int* Son valores que se almacenan en 32bits, lo cual les permite tener un 2^32 espacios disponibles. Eso va de la mano a conocimientos, 2^32 = 4,294,967,296 valores, pero este se parte en dos valores, positivos y negativos, donde los valores positivos van de 0 hasta +2,147,483,647 y los negativos van de -1 hasta -2,147,483,648. Eso quiere decir que los valores totales siempre se parten a la mitad, para la mitad será positiva y la otra mitad será negativa completamente.

* *short* Son valores que se almacenan en 16bits, por lo cual es un 2^16 de espacios, pero igual que en los int estos se parten a la mitad para positivos y mitad negativos, o sea de -32,768 hasta +32,767.

* *float y double* Almacenan valores decimales, el float tiene menos valores que el double.

### Textos

Para los textos, hay diferentes, ya sean caracteres o arreglos de carcateres, paso a paso. Qué es un arreglo? Un arreglo es como una caja con posiciones, que inicia desde el espacio 0 hacia adelante. Un tipo de dato como lo es char, es un arreglo de un solo espacio, o sea un texto de un solo caracter. Luego se pueden hacer arreglos de tipo char los cuales almacenen cadenas de un tamaño definido. Si se quieren almacenar cadenas en general pero no se saben los tamaños lo mejor es usar un dato string, ya que cumplen lo requerido pero estos consumen más espacio en memoria.
* *char*
* *array*
* *string*

### Booleanos

Los booleanos al igual que en álgebra booleana son de verdadero o falso (ceros y unos).
* *bool*

---
## Condicionales

Las condicionales como su nombre lo indica, son cosas que deben cumplirse para que se pueda ejecutar, cuando se coloca un *if* quiere decir que **si se cumple se ejecuta el código** si no, se ejecuta otra cosa o simplmente no sucede nada.

### if

``` C++
if (num > 0){
    cout << "Su numero es positivo" << endl;
}
```

Esto se separa en varias partes. Primero se ve que si se cumple algo sucede lo siguiente. Parte por parte sería se define que habrá condición *if* luego se coloca la condición *(condición)* y luego el bloque de código que se va a ejecutar *{bloque de código a ejecutar}*. 

Ahora, qué sucede **si la condión no se cumple**, no es necesario que esté pero si se quiere tomar en cuenta se usa la palabra reservada *else* lo cual indica, **si lo anterior no se cumple entonces es esto**.

### else

``` C++
if (num > 0){
    cout << "Su numero es positivo" << endl;
} else {
    cout << "Su numero es negativo" << endl;
}
```
En esta parte el *else* **no lleva condición ya que al final solo es, lo que sucede si no se cumple la condición o condiciones iniciales**. Con esto su estructura es básica, si no se cumple lo anterior *else* que se ejecute esto *{bloque de código a ejecutar}*. 

También hay condiciones especiales, supongamos que queremos que en nuestro ejemplo si alguien escribe el cero, ese valor no es negativo, es neutro; sabiendo lo anterior, podemos hacer que corra una condición extra:

### else if

``` C++
if (num > 0){
    cout << "Su numero es positivo" << endl;
} else if (num == 0){
    cout << "Su numero es neutro" << endl;
} else {
    cout << "Su numero es negativo" << endl;
}
```

En este nuevo código, por la mitad se ejecuta una nueva condicón que tiene la misma estructura que el *if* pero ejecuta algo diferente.

### Signos de condicionales
* *<* menor que
* *<=* menor o igual que
* *\>* mayor que
* *\>=* mayor o igual que
* *==* igual que
* *!=* distinto que
* *&&* y (unión, dos o varias condiciones se deben cumplir al mismo tiempo para ejecutar código)
* || o (con que una condición se cumpla, se ejecuta código sin importyar si hay más)

Con esto, si en dado caso se compara como condición un menú, sea uno por ejemplo con cuatro opciones, 1. Sumar 2. Restar 3. Multiplicar 4. Dividir. Con las opciones anteriores no sería muy conveniente usar un if, else if, else if, else ya que se volvería algo tedioso y largo, para ello existe una función llamada *switch* la cual sirve para la compración de números o caracteres. 

### switch

``` C++
    int opt = 1;

    switch (opt){
        case 1:
            cout << "Suma " << endl;
            break; // Sale de la función
        default:
            cout << "Error " << endl;
            break;
    }
```

Antes de continuar, el ejemplo cuanto menos está avanzado, pero observese la estructura. Primero, lo que va a usar para comparar es la variable opt, o sea que desde un inicio se debe avisar que variable se usa para comparar. La variable que se compare puede ser un char por lo tanto también está su uso disponible si es necesario. Luego de escribir case x, la x será el valor al cual entrará nuestra condición si se cumple, en el ejemplo vemos que opt = 1, por lo tanto entra en "case 1" ya que en ese la x tiene el valor de 1. Luego de que haya entrado, si queremos salir de la función y que no se ejecute el resto se usa la palabra reservada *brake*. Así se puede hacer con más número pero si en dado caso no es ninguno se usa la palabra reservada *default* que funciona como el *else* paar el *if*; eso quiere decir que si no es nada de lo anterior es eso.

---
## Ciclos

Los ciclos, son tareas que se ejecutan mientras alguna o algunas condiciones se estén cumpliendo, una vez se cumplan ya no se ejecutan. Tienen palabras reservadas como *break* el cual corta el ciclo cuando se encunetra esa aplabra o *continue* que lo que haces es que avanza a la siguiente iteración si se ve encontrada.

### Ciclo for

El ciclo for es un ciclo el cual se ejecuta cuando sabemos cuántas veces se va a repetir, o de otra forma, las veces que queremos que algo se repita, supóngase que se quiere imprimir los números del 1 al 10, sabemos desde que valor inicia hasta el valor que termina. Su estructura es la siguiente: for (int var = valor; condición; var++ ó var--){bloque de código a ejecutar}. Antes de verlo en código se deben explicar unos detalles, las dondiciones siempre deben estar en términos de 'var' ya que se ejecutarán los ciclos de manera definida, y el var++ ó var-- quiere decir lo siguiente:

* *var++* quiere decir que var estará aumentando de 1 en 1, esto se puede cambiar, por ejemplo var + 2, eso sería que var aumenta 2 cada que se vuelva a ejecutar el ciclo, por lo general se hace de 1 en 1, pero se puede cambiar.
* *var*-- funciona de manera inversa a var++ ya que este en vez de aumenatr de 1 en 1, disminuye de 1 en 1.

Lo anterior es importante, ya que **si no se actualiza el valor se repetiría infinitamente**.

Ejemplo de código que escribe en consola los números del 1 al 10:

``` C++
for (int i = 1; i <= 10; i++){
    cout << i << endl;
}
```

### Ciclo while

Este es muy similar al *for* en esencia, pero con un cambio claro; este se va a repetir siempre que la condición se cumpla, o sea, el *for* está definido con un límite desde el inicio, mientras que el *while* **se va a ejecutar siempre y cuando la condición esté en proceso**, ejemplo:

Código que imprime del 1 al 5:

``` C++
int num = 1;
while (num <= 5){
    cout << i << endl;
    i++;
}
```

Algo a mencionar, si o si, **debe haber cambio de la condición dentro del código que se va a ejecutar**, ya sea que el valor si es númerico aumente o disminuya en el bloque, o que si es algún valor que el usuario deba ingresar se le esté solicitando dentro del código. Si no se actualiza el ciclo este se va a repetir infinitamente.

### Ciclo do while

Es igual que el ciclo *while*, pero este tiene como condición previa, que **se va a ejecutar al menos una vez**, generalmente sirve para escribir alertas. Supongamos que cuando alguien ingresa a un sistema, se le quiere solicitar un valor, pero si se usa un ciclo *for* dicha alerta se ejecutaría una cantidad de veces; si se usa *while* pero no se ha definido el valor, el ciclo no se ejecuta.

Código que solicita la contraseña, y deja pasar hasta que se cumpla:

``` C++
string password;

do {
    cout << "Ingrese su contrasenia: " << endl;
    getline(cin, password)
} while(password != "prueba123");
```
---
## Manejo de terminal (consola)

Para el amnejo de terminal nos referimos a que desde la terminal sea capaz el programa de escribir o recibir cosas. Lo que se usa para escribir en terminal es la palabra reservada *cout*. Para obtener datos desde la terminal (que el usuario lo escriba) depende del contexto, no se usa lo mismo para un número que para una oración completa (cadena con espacios).

### Leer números o palabras

Para leer números o palabras (no oraciones) se usa la palabra reservada *cin* la cual significa *Console Input* o en español *Entrada de Consola*. Para leer oraciones (palabras con espacios, no una única palabra), se usa la palabra reservada *getline* pero esta lleva varias cosas, se debe decir que si es una entrada y a su vez a cual variable se le asigna. Unos ejemplos:

``` C++ 
int edad;

cin >> edad;
```

``` C++
string nombre;

cin >> nombre;
```

``` C++
string nombreCompleto;

getline(cin, nombreCompleto)
```

Ahora, hay un error muy común, el cual es que cuando se usa un *getline* luego de haber usado un *cin*. Este error se debe a que al usar un *cin* se puede quedar un salto en el buffer entonces por norma y buena práctica es adecuado usar un *cin.ignore();* esto lo que hace es limpiar el buffer y que ese error no suceda. También es habitual colocar *cin.ignore(1000, '\n')* el cual no solo toma en cuenta un caracter, si no que desde mil carcateres o un salto de linea. Un ejemplo sería, cuando se pide el número de teléfono del usuario y luego se pide la dirección:

``` C++
int telefono;
string direccion;

cout << "Ingrese su numero de telefono: ";
cin >> telefono;

cout << "Ingrese su direccion: ";
getline (cin, direccion);
```

En ese código si se ejecuta tal cual, al colocar el numero de telefono, luego de eso, no permitirá escribir la direccón ya que en el buffer está cargado un salto. Para arreglar lo anteriormente mencionado, se usa el *cin.ignore()* el cual quedaría así:

``` C++
int telefono;
string direccion;

cout << "Ingrese su numero de telefono: ";
cin >> telefono;
cin.ignore();

cout << "Ingrese su direccion: ";
getline (cin, direccion);
```
---
## Funciones

Las funciones en C++ sirven para recortar código, o sea, si yo siempre quiero mostrar un mensaje de bienvenida, pero lo debo mostrar en varias cosas, no tiene sentido estar en cada sessción escribiendo el saludo, mejor una función que recorte eso. 

### Declarar función

La función al inicio depende de algo, si quiero que simplemente escriba algo o que me devuelva algo. Si es esribir o modificar algo que no debe regersar nada, se usa *void*. Si quiero que me devuelva algo, debo escribirlo al inicialr, supongase que es un entero por lo tanto escribo *int* al inicio. Luego va el nombre de la función. Luego va *(datos de entrada)* los datos de entrada se les debe decir que tipo son y el nombre, si no lleva dato o datos de entrada se deja vacío; si recibe varios datos se pueden escribir solo siendo separado por las comas ",". Luego se abren llaves y se escribe el código a ejecutar. Si debe retornar algo se usa la palabra reservada *return* y al lado al variable que retorna, dicha variable debe ser del mismo tipo que la de la función, no usar por ejemplo *int* y retornar una cadena.

``` C++
    // Solo imprime un saludo
    void saludar(){
        cout << "Hola!\n";
    }

    // Recibe valor, pero no retorna valor, solo imprime
    void miValor(int x){
        cout << "Su valor es: " << x << "\n";
    }

    // Retorna valor
    int sumandoDiez (int x){
        return x + 10;
    }
```

Las funciones también afectan a valores definidos, se les conoce como "Parámetros por referencia", esto lo que hace es que a los valores que le mandemos los pueda cambiar. Esto a que se debe, a que si existe un *return* no podemos regresar dos valores, pero supóngase que se le quiere dar a dos valores distintos algún cambio, pues se deben cambiar por referencia usando el símbolo *&*.

``` C++
    void cambiarValores (int &x, int &y){
        x = x + 20;
        y = y + 5;
    }
```

Si se quiere cortar una función como lo hacen los *break* para los ciclos, se puede usar un *return;* en alguna parte de la función, ya que auqnue sea un *void* de función si recibe un *return;* simplemente se deja de ejecutar.