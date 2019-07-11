/*
 *  23_2. Loops e Funções - Faça um Programa em C para calcular a série Fibonacci até
 *  0 N-ésimo termo. A série tem a seguinte forma: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
 * 
 * PS.: I use fragments of the factorial program that I did for class on 11/21/2018
 * 
 * 
*/ 

#include <stdio.h>
#include <stdlib.h>

void fibonacci_calculator(int count);

int main(int argc, char const *argv[])
{
    while(argc == 1) {
        printf("\n\tDo like this: %s number (For Exemple: %s <space or tab> 10 <enter>)\n\n", argv[0], argv[0]);
        return 1;
    }

    int count = atoi(argv[1]);

    if (count <= 0){
        printf("\n\tDon't use Number less than 1\n\n");
        return 1;
    }

    fibonacci_calculator(count);
    
    return 0;
}

void fibonacci_calculator(int count) {
    int number_before = 0;
    int number_aux = 0;
    int number = 1;
    int index = 0;
    
    printf("\nFibonacci Series up to %d:\n", count);

    for(index = 1; index <= count; index++) {
        printf("%d, ", number);
        number_before = number;
        number += number_aux;
        number_aux = number_before;
    }
    printf("\n\n");

}