#include <stdio.h> // Defino esta libreria para utilizar printf.
int es_primo(int num) {// creamos una funcion auxiliar que recibe un numero entero y devuelve booleano.
  if (num <= 1) { // la funcion comienza por comprobar si el numero es menor o igual a 1, si no es primo devuelve 0.
    return 0;
  }
  for (int i = 2; i < num; i++) { // utilizamos un bucle for para comprobar si es divisible por cualquier numero menor que él mismo.
    if (num % i == 0) { 
      return 0;
    }
  }
  return 1; //Si el bucle termina sin encontrar ningun divisor, entonces el numero es primo y devuelve 1.
}

int main() { 
  int limite_superior = 32768; // defino una variable que es el tope superior de los enteros cortos.
  for (int i = limite_superior - 1; i >= 2; i--) { //  Utilizo un bucle for para ir bajando del maximo entero corto para definir el  primo mas cercano.
    if (es_primo(i)) { // Llamamos a la funcion es primo para comprobar si lo es.
      printf("El numero primo mas cercano por debajo de %d es %d\n", limite_superior, i); // imprime el valor mas cercano al maximo entero corto.
      break; // utilizo el break para salir del bucle.
    }
  }
  return 0;
}