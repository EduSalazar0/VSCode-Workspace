#include <stdio.h>
int main(int argc, char *argv[]){// Definicion de main
    int decimal;// Definicion de valor int
    char hex[16] = {'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};//Definicion de char hex con la finalidad de igualarlo a los valor de hexadecimal
    printf("Escribe un numero en decimal\n");// Peticion de usuario para ingresar numeros
    scanf("%d",&decimal);// Escaneo de valor de usuario
    while(decimal >= 16){// While para comparar numero ingresado entre 16
        decimal = decimal/16; // conversion de numero a hexadecimal
    }
    printf("%d",hex[decimal]); // Impresion del numero en hexadecimal
}