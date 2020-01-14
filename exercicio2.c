#include <stdio.h>

int main (void){

    int num1;
    int antecessor;
    int sucessor;

    printf("Qual o numero?\n");
        scanf(" %d", &num1);

    sucessor = num1 + 1;
    antecessor = num1 - 1;

    printf("sucessor = %d ", sucessor);
    printf("antecessor = %d", antecessor);

}