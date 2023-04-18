#include <stdio.h> // libreria para utilizar printf
int main() {
    int num;// defino num para almacenar la variable obtenida.
    int sum = 0; // defino sum = 0 para utilizarla despues como una variable de almacenamiento.
    int dig; // Defino dig para separar la respuesta del ultimo digito del numero ingresado.
    printf("Ingrese un numero entero: "); //Impresion de orden.
    scanf("%d", &num); //impresion para obtener datos ingresados por el usuario.
    while (num != 0) {// Iterar a través de cada dígito del número
        dig = num % 10;  // Obtener el último dígito
        num /= 10;  // Eliminar el último dígito del número
        if (dig % 2 == 0) { // Comprobar si el dígito es par
            sum += dig;  // Agrega el dígito para la suma
        }
    }
    printf("La suma de los digitos pares es: %d\n", sum); // Impresion de los resultados
return 0;
}