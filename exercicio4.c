#include <stdio.h>

int main (void){

    int dia;

    printf("qual o dia entre 1 a 7?\n");
        scanf(" %d", &dia);
    
    if (dia == 1|| dia == 2 || dia == 3 || dia == 4 || dia == 5 || dia == 6 || dia == 7){
        
        switch (dia){

        case 1:
        printf(" %d é domingo \n", dia);
            break;

        case 2:
        printf(" %d segunda\n", dia);
        break;

        case 3:
        printf(" %d terca\n", dia);
        break;

        case 4:
        printf(" %d quarta\n", dia);
        break;

        case 5: 
        printf(" %d quinta\n", dia);
        break;

        case 6:
        printf(" %d sexta\n", dia);
        break;

        case 7:
        printf(" %d sabado\n", dia);
        break;
        }

    }
}