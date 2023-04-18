#include<stdio.h> // ingreso esta biblioteca para usar el printf.
int main(){
    int num,i,j,k,l,h; // defino todas estas variables para utilizarlos como auxiliares o variables principales para imprimir.
    printf("Ingrese cualquier numero de 3 digitos\n"); //Lee la instruccion ingresada por el usuario.
    scanf("%d",&num);//Escanea los datos ingresados por el usuario.
    if(num >= 100 && num <= 999){       //Defino un if para que ingrese solo numeros de 3 digitos.
        j= num / 100; // Divido el numero por 100 para sacar el ultimo numero.
        printf("\nLos numeros de %d son : ",j); //Imprime el primero numero.
        for (i=1; i<=j;i++){ // Utilizo un for para repetir e imprimir todos los numeros uno a uno.
            printf("%d ",i); // Imprime todos los numeros.
        }
        h = num / 10; // utilizo h como una variable de respaldo para recoger el segundo digito
        k = h % 10; // utilizo h % para encontrar el residuo.
        printf("\nLos numeros de %d son: ",k); // Imprime el segundo numero.
         for (i=1; i<=k;i++){ // Utilizo un for para repetir e imprimir todos los numeros uno a uno.
            printf("%d ",i); // Imprime todos los numeros.
        }
        l = num%10; //Saca el primer numero contando de izquiera a derecha.
        printf("\nLos numeros de %d son: ",l); // Imprime el ultimo numero.
         for (i=1; i<=l;i++){ // Utilizo un for para repetir e imprimir todos los numeros uno a uno.
            printf("%d ",i); // Imprime todos los numeros.
        }
    }
    else{
        printf("El numero ingresado no esta dentro del rango establecido\n"); //En caso de no cumplirse el if se imprime.
    }
    return 0;
}