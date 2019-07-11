/*
 *
 *   14. Loop (Todos os laços) – Faça um programa em C que imprima em ordem decrescente a sequencia 100 98 97 ... 1
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int i;
    int cont;

    system("clear");
    printf("\n\nContando de 100 para 1 [Forma Descrecente] usando Laço FOR:\n\n");
    cont = 1;
    for (i = 100; i >= cont; i--)
        printf("%d ", i);

    printf("\n\n");

    printf("\n\nContando de 100 para 1 [Forma Descrecente] usando Laço WHILE:\n\n");
    cont = 1;
    i = 100;
    while (i >= cont){
        printf("%d ", i);
        i--;
    }

    printf("\n\n");

    printf("\n\nContando de 100 para 1 [Forma Descrecente] usando Laço DO WHILE:\n\n");
    cont = 1;
    i = 100;
    do {
        printf("%d ", i);
        i--;
    } while (i >= cont);

    printf("\n\n");

    return 0;


}
