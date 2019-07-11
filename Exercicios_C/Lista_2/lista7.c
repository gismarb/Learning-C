#include <stdio.h>
#include <stdlib.h>

#define VALUES 10

void readValues(int values[]);
int findHigherValue(int values[]);
int findSmallerValue(int values[]);

int main() {

    int values[VALUES];
    int i;

    printf("\n\tEntre com 10 Valores (Inteiros):\n");
    readValues(values);

    printf("\n\tValores Digitados:\n");
    for (i = 0; i < VALUES; i++)
        printf("Valor[%d] = %d\n", i + 1, values[i]);

    printf("\n\n\t\tO Maior Valor eh = %d\n\n", findHigherValue(values));
    printf("\n\n\t\tO Menor Valor eh = %d\n\n", findSmallerValue(values));

    return 0;

}

void readValues(int values[]) {

    int i;
    int num;

    for(i = 0; i < VALUES; i++) {
        printf("Valor[%d]: ", i + 1);
        scanf("%d", &num);

        values[i] = num;
    }

}

int findHigherValue(int values[]) {

    int i;
    int aux;
    int higher = 0;

    for(i = 0; i < VALUES; i++) {
        aux = values[i];
        if(aux >= higher)
            higher = aux;
    }

    return higher;

}

int findSmallerValue(int values[]) {

    int i;
    int aux;
    int smaller = 2147483647;

    for(i = 0; i < VALUES; i++) {
        aux = values[i];
        if(aux <= smaller)
            smaller = aux;
    }

    return smaller;

}


