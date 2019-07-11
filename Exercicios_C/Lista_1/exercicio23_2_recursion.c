/*
 *  23_2. Loops e Funções - Faça um Programa em C para calcular a série Fibonacci até
 *  0 N-ésimo termo. A série tem a seguinte forma: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
 * 
 * PS.: I use fragments of the factorial program that I did for class on 11/21/2018
 * Recursion and using 0 with 1st number.
 * 
 * 
*/ 

#include <stdio.h>
#include <stdlib.h>

int fibonacci_calculator(int number);

int main(int argc, char const *argv[])
{
    while(argc == 1) {
        printf("\n\tDo like this: %s number (For Exemple: %s <space or tab> 10 <enter>)\n\n", argv[0], argv[0]);
        return 1;
    }

    int number = atoi(argv[1]);
    int result = 0;

    if (number <= 0){
        printf("\n\tDon't use Number less than 1\n\n");
        return 1;
    }

    for (result = 0; result < number; result++)
        printf("\nFibonacci Series of %d: %d",number, fibonacci_calculator(result));

    printf("\n\n");
    
    return 0;
}

int fibonacci_calculator(int number) {
    if (number == 0) {
        return 0;
    }

    else if (number == 1) {
        return 1;
    }
    else {
        return(fibonacci_calculator(number - 1) + fibonacci_calculator(number - 2));
    }

}