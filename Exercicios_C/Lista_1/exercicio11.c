#include <stdio.h>
#include <stdlib.h>

/*
 *  11 - Progama em C que exibe número de 1 à 100
 *
 */

int main(){

    int i;
    
    system("clear");
    printf("Números de 1 à 100 usando\nLaco de Repeticao While\n\n");

    i = 1;
    while(i <= 100){
    
        printf("%d ", i);
        i++;
        
    }
    
    printf("\n\n");
    return 0;
}
