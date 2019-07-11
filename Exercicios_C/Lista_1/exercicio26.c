/*
 *	26. Faça um programa que receba quatro variáveis como parâmetro e troque o
 *	conteúdo das variáveis como apresentado abaixo
 *
 * X = 1
 * Y = 2
 * Z = 3
 * W = 4
 * 
 * troca_valor(X, Y, Z, W)
 * 
 * X = 4
 * Y = 3
 * Z = 2
 * W = 1
 * 
 * Sem validação de entrada.
*/

#include <stdio.h>
#include <stdlib.h>

void exchange_value(int *a, int *b, int *c, int *d);

int main() {
    int x, y, z, w;
    x = y = z = w = 0;

    printf("\n\n\tPlease, type a Values:\n\t\tX =  ");
    scanf("%d", &x);
    setbuf(stdin, NULL);
    printf("\t\tY =  ");
    scanf("%d", &y);
    setbuf(stdin, NULL);
    printf("\t\tZ =  ");
    scanf("%d", &z);
    setbuf(stdin, NULL);
    printf("\t\tW =  ");
    scanf("%d", &w);
    setbuf(stdin, NULL);

    exchange_value(&x, &y, &z, &w);

    printf("\n\n\tExchange Values:\n\t\tX = %d\n\t\tY = %d\n\t\tZ = %d\n\t\tW = %d\n\n", x, y, z, w);

    return 0;
}

void exchange_value(int *a, int *b, int *c, int *d) {
    int auxiliary;

    auxiliary = *d;
    *d = *a;
    *a = auxiliary;
    auxiliary = *c;
    *c = *b;
    *b = auxiliary;
}