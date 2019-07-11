#include <stdio.h>
#include <stdlib.h>

/*
 *  12 - Progama em C que exibe número de 1 à 100
 *
 */

int main(){

    int i;
    
    system("clear");
    printf("Números de 1 à 100 usando\nLaco de Repeticao Do While\n\n");

    i = 1;
    do{
    
        printf("%d ", i);
        i++;
        
    }while(i <= 100);
    
    printf("\n\n");
    return 0;
}
