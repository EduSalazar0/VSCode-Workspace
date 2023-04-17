#include <stdio.h> // Agrego esta libreria ára sular el prinft.
#include <string.h> // Agrego esta librería para usar la función strcmpque funciona para comparar chars.
int main(){
    int a; // Defino a como un acumulador .
    int i; // Defino i para utilizar el bucle.
    char h[3]; // Defino h para acumular caracteres.
    printf("Deseas imprimir los 20 primeros multiplos de 3 Si o No\n");// Imprimo una orden para ver si o no.
    scanf("%s", h); // Escaneo la respuesta del usuario.
    if ( strcmp(h, "Si") == 0 || strcmp(h, "si") == 0 ){ // Dentro de un If utilizo strcmp para comparar chars.
        for (i = 1; i <= 20; i++){ // Sentencia repetitiva que va a ingresar numero por numero hasta llegar al 20.
            a = 3 * i; // Operacion para obtener las respuestas necesarias.
            printf("\n3 X %d =  %d ",i, a); // Imprime las respuestas que se desea revisar.
        }
    }else {
        printf("Gracias por probar el programa\n"); // En caso de no cumplir el if imprime este mensaje de agradecimiento.
    }  
    return 0;
}
