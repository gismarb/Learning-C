/*
 *  *****************************************************
 *  USANDO O EXERCÍCIO 5 DA PROVA (TEM ENUNCIADO PARECIDO)
 *  *****************************************************
 * 
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 100

/* declaração das rotinas a serem usadas */
int get_line(char line[], int maxline);
void copy(char to[], char from[]);
void *rev_str(char *str, int size);
/* int comp_str(char str_a[], char str_b[], int size); */

int main(){
     int len_a;
     int len_b;
     int comp_word;
     char word[MAX_LINE];
     char inv_word[MAX_LINE];

     system("clear");
     printf("\n\n\tVamos INVERTER uma palavra");
     printf("\n\n\tEntre com uma PALAVRA para que possamos inverte-la: ");

     len_a = get_line(word, MAX_LINE);
     copy(inv_word, word);
     rev_str(inv_word, len_a);
     len_b = len_a;
     /* comp_word = comp_str(word, inv_word, len_b); */

     /*
     if (comp_word == 1)
         printf("\n\n\t\tA Palavra [ %s ] e um PALINDROMO\n\n", word);
     else
         printf("\n\n\t\tA Palavra [ %s ] nao e um PALINDROMO\n\n", word);
     */
     printf("\n\n\t\tA Palavra [ %s ] invertida ficar assim [ %s ]\n\n", word, inv_word);
     return 0;

}

int get_line(char s[], int lim){
     int c, i = -1;
     for(i = 0; i < lim - 1 && ((c = getchar()) != EOF) && c != '\n'; i++)
         s[i] = c;

     s[i] = '\0';
     return i;
}

void copy(char to[], char from[]){
      int i = 0;
      while((to[i] = from[i]) !='\0')
          i++;
}

void *rev_str(char *str, int size) {
    int i = size -1;
    int j = 0;
    char ch;
    while (i > j) {
	    ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

/*
int comp_str(char str_a[], char str_b[], int size) {
    int i;
    for(i = 0; i < (size); i++) {
        if (str_a[i] != str_b[i])
            return 0;
        else
            return 1;
    }
}

*/