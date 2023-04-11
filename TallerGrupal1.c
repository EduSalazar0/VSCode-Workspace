#include <math.h>
#include<stdio.h>
int main(){
    int   n;// es la variable que guarda la posicion
    float  dividend,  suma, i; //dividend: dividendo,  suma: acumulador,  i: contador
    printf("ingrese n: ");
    scanf("%d", &n); // se registra n

    for ( i = 1; i <= n ; i++){
        dividend = 1/(2*i-1);//algoritmo de los elementos 
        if ((int)i%2 == 0 ){//comprobacion de par e impar
            suma -= dividend;//si es par se resta
        }else{
            suma += dividend;// si es impar se suma
        }   
    }
    printf("suma %f", suma);//resultado
    return 0;
}