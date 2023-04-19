#include<stdio.h>
//Funcion para determinar si un numero es positivo.
int NumPosi(int num){ 
    if (num > 0){
        return 1; // Si es Positivio.
    }
    else{
        return 0; // Si es Negativo.
    }
}
//Funcion para determinar si es un numero primo.
int NumPrimo(int num){
    if (num < 1){
        return 0; // Los numeros menor a 1 no son primos
    }
    for (int i =2; i < num; i++){
        if (num % i == 0){
            return 0; // No es Primo
        }
    }
    return 1; // Es primo
}
 //Funcion Principal
 int main(){
    int num; // Declaro num como la variable que va a leer el programa
    printf("Ingrese un numero\n");
    scanf("%d",&num);
    if (NumPrimo(num) && NumPosi(num)){ // Llamo a las funciones utilizando un if
        printf("%d es numero Primo y positivo\n",num);
    }
    else {
        printf("%d no es numero Primo ni positivo\n",num);
    }
    return 0;
 }