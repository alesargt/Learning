# DOCUMENTACION PROPIA

En este documento estaré agregando mi documentación. No será la más adecuada pero será entendible para mi.

---
## Declarar variables

Para declarar una variable se necesita de varios datos, los datos necesarios son los siguientes:
* Tipo de dato
* Nombre
---
## Tipos de datos

### Numéricos

* long: Tienen 64bits, se parten a la mitad igual que el resto, desde -2^32 a +2^32 -1 incluyendo el cero.

* int: Son valores que se almacenan en 32bits, lo cual les permite tener un 2^32 espacios disponibles. Eso
va de la mano a conocimientos, 2^32 = 4,294,967,296 valores, pero este se parte en dos valores, positivos y
negativos, donde los valores positivos van de 0 hasta +2,147,483,647 y los negativos van de -1 hasta 
-2,147,483,648. Eso quiere decir que los valores totales siempre se parten a la mitad, para la mitad será 
positiva y la otra mitad será negativa completamente.

* short: Son valores que se almacenan en 16bits, por lo cual es un 2^16 de espacios, pero igual que en los
int estos se parten a la mitad para positivos y mitad negativos, o sea de -32,768 hasta +32,767.

* char: Es un byte, por lo que hay 2^8 valores, mitad positiva y mitad negativa desde los valores -128 a +127.

* float y double: Almacenan valores decimales, el float tiene menos valores que el double.

### Textos

Para los textos, hay diferentes, ya sean caracteres o arreglos de carcateres, paso a paso. Qué es un arreglo?
Un arreglo es como una caja con posiciones, que inicia desde el espacio 0 hacia adelante. Un tipo de dato
como lo es char, es un arreglo de un solo espacio, o sea un texto de un solo caracter. Luego se pueden hacer
arreglos de tipo char los cuales almacenen cadenas de un tamaño definido. Si se quieren almacenar cadenas en
general pero no se saben los tamaños lo mejor es usar un dato string, ya que cumplen lo requerido pero estos
consumen más espacio en memoria.
* char
* string

### Booleanos

Los booleanos al igual que en álgebra booleana son de verdadero o falso (ceros y unos).
* bool

