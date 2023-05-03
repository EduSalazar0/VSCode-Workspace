#include <stdio.h>
int main(int argc, char *argv[]){
    int decimal;
    char hex[16] = {'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    printf("Escribe un numero en decimal\n");
    scanf("%d",&decimal);
    while(decimal >= 16){
        decimal = decimal/16;
        
    }
}