#include<stdio.h>
#include<stdlib.h>
#define filas 40
#define columnas 40
int main(){
    int X[filas][columnas]; //Definicion de matriz con n filas y n columnas
    int f,c,i,j; // Definicion de variables
    //Inicializacion del programa encargado de obtener los datos que ingresa el usuario
    printf("Ingrese de cuantas filas va a querer su matriz? ");
    scanf("%d",&f);
    printf("Ingrese de cuantas columnas va a queres su matriz? ");
    scanf("%d",&c);
    //Impresión de matriz inicializada en cero
    system("cls");
    for (i=0;i<f;i++){
         for(j=0;j<c;j++){
            X[i][j] = 0;
         }
    }
    printf("La matriz X inicializada en 0: \n");
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            printf("( %d )",X[i][j]);
        }
        printf("\n");
    }

    return 0;
}
