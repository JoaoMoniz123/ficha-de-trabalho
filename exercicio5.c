#include <stdio.h>

int main(void){

    int num1;
    int num2;
    int conta;
    int total;

    printf("Escolhe,\n 1-multiplicacao; \n 2- divisao; \n 3- adicao; \n 4- subtracao. \n");
        scanf(" %d", &conta);

        switch (conta){

        case 1:
        printf("multiplicacao\n");
            scanf(" %d", &num1);
            scanf(" %d", &num2);
            total = num1 * num2;
            printf("toltal = %d ", total);
            break;
        
        case 2:
        printf("divisao\n");
            scanf(" %d", &num1);
            scanf(" %d", &num2);
            total = num1 / num2;
            printf("toltal = %d ", total);
            break;
        
        case 3:
        printf("adicao\n");
            scanf(" %d", &num1);
            scanf(" %d", &num2);
            total = num1 + num2;
            printf("toltal = %d ", total);
            break;

        case 4:
        printf("subtracao\n");
            scanf(" %d", &num1);
            scanf(" %d", &num2);
            total = num1 - num2;
            printf("toltal = %d ", total);
            break;
        }
        return 0;
    
}