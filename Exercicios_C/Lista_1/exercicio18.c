/*
 *  18. Condicional - Faça um programa em C que leia os valores A, B, C e diga se a soma de A + B é menor que C.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, soma;

    system("clear");
    printf("\n\tVamos Verificar Valores entre a Soma de A+B com o valor de C\n\n");
    printf("\n\tEntre com o Valor de A: ");
    scanf("%d", &a);
    printf("\n\tEntre com o Valor de B: ");
    scanf("%d", &b);
    printf("\n\tEntre com o Valor de C: ");
    scanf("%d", &c);

    soma = a + b;

    if (soma > c)
        printf("\n\n\tA Soma de A + B (%d) e maior que C (%d)\n\n", soma, c);

    else if (soma < c)
        printf("\n\n\tA Soma de A + B (%d) e menor que C (%d)\n\n", soma, c);

    else
        printf("\n\n\tA Soma de A + B (%d) e igual a C (%d)\n\n", soma, c);

    return 0;
}
