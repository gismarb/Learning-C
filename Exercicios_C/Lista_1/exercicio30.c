/*
 * 
 *  30 – Faça um programa em C para remover uma determina sequencia de caracteres
 *  de uma string. Crie para isso uma função com o nome trimmer(str, ini, fim); onde str
 *  é a string a ser limpada (trimada) e início e fim são as posições que serão
 *  removidas.
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

void trimmer(char str[], int ini, int fim);

int main() {
    char str[SIZE] = "\0";
    int index = 0;

    /* Input string */
    printf("\n\n\tType a word: ");
    scanf("%s", str);

    /* Trimming the String position 3 and 6*/
    trimmer(str, 3, 8);
    
    /* Printing trimmed word */
    printf("\n\n\tTrimmed Word: %s\n\n", str);

    return 0;
}

void trimmer(char str[], int ini, int fim) {
    int aux = 0;
    int index = 0;
    char copy_str[SIZE] = "\0";

    /* Using auxiliary array (copying)*/
    strcpy(copy_str, str);

    /* Cleaning array */
    for(index = 0; index < strlen(str); index++)
        str[index] = '\0';

    /* Stored only character that I need */
    for(index = 0; index < strlen(copy_str); index++) {
        if((index < ini) && (index > fim)) {
            str[aux] = copy_str[index];
            aux++;
        }
    }
}
