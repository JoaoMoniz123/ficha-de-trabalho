#include <stdio.h>

int main (void){

    float temperatura;
    float celsius; 

    printf("Qual a temperatura em Fahrenheit?\n");
        scanf(" %f", &temperatura);
    
    celsius = (temperatura - 32) * 5 / 9;

    printf("%0.2f \n", celsius);
    
}