
# Ejercicios básicos de programación
## Ejercicios Básicos con estructura secuencial
### Leer dos números y mostrarlos por pantalla.

Programa C++ que lee por teclado dos números enteros y los muestra por pantalla.
Por ejemplo, si los números introducidos por teclado son 3 y 44 el programa mostrará el mensaje:

``` 
Ha introducido los números: 3 y 44 
```

### Leer una cadena de caracteres y mostrarla por pantalla.

 Programa C++ que lee una cadena de caracteres correspondiente al nombre de una persona y muestre por pantalla el nombre introducido junto con un saludo..
Por ejemplo, si se introduce el nombre: Pedro
El programa mostrará por pantalla el mensaje:
 
Buenos días Pedro!!

### C++ Ejercicios Básicos Resueltos 

Ejercicios 1 y 2

Ejercicio 1: Calcular longitud y área de la circunferencia y el volumen de la esfera
Ejercicio 2: Realizar operaciones aritméticas con números

1. Programa que leer el valor del radio y calcula la longitud de la circunferencia, el área del círculo y el volumen de la esfera correspondiente a ese radio.

Longitud de la circunferencia = 2*PI*Radio
Area de la circunferencia = PI*Radio^2
Volumen de la esfera = (4/3)*PI*Radio^3

### Pasar de grados centígrados a Fahrenheit en C++ 

Programa C++ para convertir grados centígrados en grados Fahrenheit.
El programa pide que se intrduzca por teclado un valor correspondiente a los grados centígrados o celsius y mostrará por pantalla el equivalente en grados Fahrenheit.
 
La fórmula para pasar de grados centígradosa Fahrenheit es:  F = 32 + ( 9 * C / 5)
donde F indica los grados Fahrenheit y C los grados centígrados.

### Pasar de grados centígrados a grados Kelvin.
 Programa C++ para convertir grados centígrados en grados Kelvin.
El programa pide que se intrduzca por teclado un valor correspondiente a los grados centígrados o celsius y mostrará por pantalla el equivalente en grados Kelvin.
 
La fórmula para pasar de grados centígrados a grados Kelvin es:  K = C + 273
donde K indica los grados Kelvin y C los grados centígrados.


### Pasar de grados centígrados a grados Reamur. 
 Programa C++ para convertir grados Centígrados en grados Reamur.
El programa pide que se intrduzca por teclado un valor correspondiente a los grados centígrados o celsius y mostrará por pantalla el equivalente en grados Reamur.
 
La fórmula para pasar de grados centígrados a grados Reamur es:  R = (80 * C) / 100
donde R indica los grados Reamur y C los grados centígrados.

### Calcular la longitud de la hipotenusa según el Teorema de Pitágoras.  
 Programa C++ que implementa el teorema de Pitágoras para calcular la hipotenusa de un triángulo rectángulo.
El programa pide que se intrduzca por teclado los valores correspondientes a lass longitudes de los catetos de un triángulo rectángulo y calcula la longitud de la hipotenusa del triángulo mediante el teorema de Pitágoras.
 
El Teorema de Pitágoras dice que en un triángulo rectángulo el valor de la hipotenusa al cuadrado es igual a la suma de los cuadrados de los catetos.
 

Por lo tanto sabiendo las longitudes de los catetos podemos calcular la longitud de la hipotenusa calculando la raíz cuadrada de la suma del cuadrado de los catetos:

## Ejercicios Básicos con estructura condicional

### Comprobar si un número es positivo.

Programa C++ que comprueba si un número es positivo.
 
El programa pide que se intrduzca por teclado un número entero y mostrará un mensaje indicando si el número es positivo o no lo es

### Comprobar si un número es par o impar. 
 Programa C++ que comprueba si un número es par o impar.
 
El programa pide que se intrduzca por teclado un número entero y mostrará un mensaje indicando si el número es par o impar.
 
Para comprobar si un número es par hay que dividir el número entre dos y si el resto de la división del número entre 2 da cero entonces el número es par.
 
Utilizaremos el operador % para obtener el resto de la división del número entre dos. 

### Comprobar si un número es positivo, negativo o cero.  

Programa C++ que comprueba si un número es positivo o negativo.
 
El programa pide que se introduzca por teclado un número entero y mostrará un mensaje indicando si el número es positivo o si es negativo. Si se introduce un cero se mostrará el mensaje: 0 no es positivo ni negativo

### Mayor de dos números.

Obtener el mayor de dos números en C++
	
Programa C++ que calcula cuál es el mayor de dos números enteros introduccidos por teclado.
El programa pide que se intrduzcan dos números enteros y obtiene el mayor de los dos. En el caso de que sean iguales mostrará un mensaje indicándolo.

### Mayor de tres números.

 Programa C++ que calcula el mayor de tres números enteros introduccidos por teclado.
El programa pide que se intrduzcan tres números enteros y obtiene y muestra por pantalla el mayor de ellos.
Para obtener el mayor de tres números será necesario utilizar instrucciones if .. else anidadas para realizar la comparación entre los números y poder determinar cuál de los tres es el mayor. 

### Comprobar si un año es bisiesto 

 Programa C++ que lee por teclado un año y comprueba si es bisiesto. Un año es bisiesto si cumple lo siguiente: es divisible por 4 y no lo es por 100 ó si es divisible por 400.
Esta condición en C++ la escribiremos así:
if(a%4==0 and a%100!=0 or a%400==0)
Para saber si un número es divisible por otro se utiliza el operador % que obtiene el resto de la división entre dos enteros.
Por ejemplo, si a%4 == 0 significa que a es divisible por 4, es decir, el resto de dividir a entre 4 es cero.
El programa pide que se introduzca el año mostrando el mensaje
Introduce año:
Pero para mostrar el mensaje “Introduce año”: y que salga la ñ por pantalla debemos escribir en el lugar donde debe aparecer la ñ su código ASCII.

   cout << "Introduce a"<<(char)164 <<"o: "; //164 ascii de ñ

El programa C++ completo que calcula si un año es bisiesto es el siguiente:


### Calcular porcentaje de descuento a aplicar según precio en C++
	
Programa C++ que pide que se introduzca por teclado el precio de un producto y muestre su precio final tras aplicarle el descuento que le corresponda.
 
El descuento a aplicar dependerá del precio del producto:
Si el precio es inferior a 100€ no se aplica descuento.
Si el precio es mayor o igual a 100€ y menor que 200€ se aplica un 5% de descuento.
Si el precio es mayor o igual a 200€ se aplica un 10% de descuento.

El programa mostrará el precio final del producto y el importe del descuento aplicado.


### Dados dos números comprobar si el mayor es múltiplo del menor
	
Programa C++ que lee por teclado dos números enteros enteros positivos distintos y comprueba si el mayor de los números es múltiplo del menor.
 
Para resolverlo, una vez introducidos los números se calcula cuál de los dos es el mayor y cuál es el menor y después se comprueba si el mayor es múltiplo del menor.
 
Para comprobar si el mayor número es múltiplo del menor ser calcula el resto de la división del mayor entre el menor. Si el resto de esta división es igual a cero significa que el mayor número es múltiplo del menor


### Ordenar tres números de forma ascendente en C++
	
Programa C++ que muestra tres números enteros ordenados de forma ascendente de menor a mayor.
El programa pide que se intrduzcan tres números enteros y los muestra por pantalla de menor a mayor.
Para realizar este programa se utilizarán anidamientos de instriccuiones if .. else para realizar todas las posibles comparaciones entre los números y determinar el orden ascendente entre ellos. . 