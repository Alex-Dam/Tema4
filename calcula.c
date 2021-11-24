#include <stdio.h>
#include "calc.h"

int main(){
int a=5;
int b=10;
    scanf("%d %d",&a,&b);
    printf("la suma entre %d y %d vale %d\n",a,b,suma(a,b));
    printf("la resta entre %d y %d vale %d\n",a,b,resta(a,b));
    printf("la multiplicacion entre %d y %d vale %d\n",a,b,multiplicar(a,b));
    printf("la division entre %d y %d vale %d\n",a,b,dividir(a,b));
}