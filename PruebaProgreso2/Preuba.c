#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int crearmatriz(int matriz[3][23]){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<23;j++){
            matriz[i][j]=rand()%11;
            printf(" %d ",matriz[i][j]);
        }
        printf("\n");
    }
    return matriz;
}


int main(){
    int X[3][23];
    crearmatriz(X);


    return 0;
}