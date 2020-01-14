#include <stdio.h>

int main (void){

    float num1;
    float num2;
    float num3;
    int valor = 500000;

    printf("Premio de 500 000.00\n");
    printf("Primeiro %0.2f \n Segundo %0.2f \n Terceiro %0.2f\n");

    num1 = valor * 0.46;
    num2 =  valor * 0.32;
    num3 =  valor * 0.22;

    printf("primeiro lugar = %.2f\n", num1);
    printf("Segundo lugar = %.2f\n", num2);
    printf("Terceiro lugar = %.2f\n ", num3);



}