#include <stdio.h>
int main() {
    int num, numhex = 0, i = 1, rem; // Definicion de variables para el num ingresado,numero hexadecimal, i como contador y rem como variable acumuladora
    printf("Ingrese el numero que quiere transformar a hexadecimal: ");// Solicitud a usuario para ingresar un numero
    scanf("%d", &num); // Escaneo de numero ingresado por el usuario

    // Convertir decimal a hexadecimal
    while (num > 0) {
        rem = num % 16;  // Obtener el residuo de dividir por 16
        numhex += rem * i;     // Multiplicar el residuo por 16^n y sumar al resultado
        i *= 10;                // Incrementar la posición del dígito hexadecimal
        num /= 16;      // Dividir el decimal entre 16 para continuar la conversión
    }
    printf("El numero hexadecimal es: %X\n", numhex);// Imprimir el número hexadecimal
    return 0;
}