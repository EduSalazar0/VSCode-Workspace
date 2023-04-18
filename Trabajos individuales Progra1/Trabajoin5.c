#include<stdio.h>// Utilizo la libreria para poder usar printf.
int main(){
    int x=0;// Defino x como el primer numero de la serie Fibonacci.
    int y=1,sum=0; //Defino y como segundo numero de la serie Fibonacci y sum como un almacenar suma de los elementos.
    int i=0, promedio,z=0; // i es el contador que va a sumar en el while, promedio para almacenar la respuesta y z para almacenar el siguiente numero Fibonacci.
    printf("El promedio entero de los numeros entre 0 a 1000 Fibonacci\n");//Imprime la instruccion.
   while (x <= 1000){ // Loop While para definir limites en los numeros
    if (x >= 0 && x <= 1000){//utilice el if para que sume 1 al contador y asi conseguir el total de numero por los cuales dividir.
        sum += x;
        i++;//contador.
    }
    z= x+y; // Funcion definidia secuencia Fibonacci.
    x = y; // Funcion definidia secuencia Fibonacci.
    y= z; // Funcion definidia secuencia Fibonacci.
   }
    promedio = sum/i; //Saco el promedio dividiendo la suma de los numeros Fibonacci por su total.
    printf("El promedio entero de los numeros entre 0 a 1000 Fibonacci es: %d",promedio); //Imprime el resultado.
    return 0;
}