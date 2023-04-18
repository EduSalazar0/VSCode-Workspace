#include<stdio.h>
int main(){
    int a,b,c;
    printf("Ingrese el primero numero\n");
    scanf("%d",&a);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&b);
    printf("Ingrese el tercer numero\n");
    scanf("%d",&c);

    a = a+1;
    b = b*2;
    c = c*c;
    printf("\nEl valor del primer numero es: %d",a);
    printf("\nEl valor del segundo numero es: %d",b);
    printf("\nEl valor del tercer numero es: %d",c);
    return 0;
}