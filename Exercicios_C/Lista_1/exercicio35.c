/*
 *
 *	35 – Faça um programa em C para ler 100 nomes via teclado ou por arquivo. A partir
 *	dessa entrada solicite ao usuário que digite um nome e faça a busca no vetor. A sua
 *	rotina deve encontrar o valor do nome dentro do vetor e retornar tanto o nome quanto
 *	a posiao do vetor. Em caso de não encontrar deve ser exibida a mensagem que não
 *	foi encontrado.
 * 	Necessário arquivo exercicio35_file_names.txt
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define NUMBER_NAMES 100
#define BUFFER_SIZE 256

void search_names_in_file();
void search_names_typed();

int main() {
	char option = 0;

	printf("\n\n\tPeople Name Finder\n");
	printf("\n\n\tType\n\t\t[ 1 ] - For searches on a list of names (on file)\n\t\t[ 2 ] - For searches on a list of names (which you will type)\n\n\tYour Choice: ");
	scanf("%c", &option);
	setbuf(stdin, NULL);

	switch (option) {
		case '1':
			search_names_in_file();
			break;
		
		case '2':
			search_names_typed();
			break;

		default:
			printf("\n\t\t\tNone of the alternatives chosen, Closing Program...  \n\n");
			break;
	}
	
	return 0;
}

void search_names_in_file() {
	FILE *fp_names;
	char names_list[NUMBER_NAMES][BUFFER_SIZE];
	char name[BUFFER_SIZE];
	int count = 0;
	int aux_count = 0;

	if((fp_names = fopen("exercicio35_file_names.txt", "r")) == NULL) {
		system("clear");
		printf("\n\n\tInput file not found or nonexistent\n\n");
		return;
	}

	system("clear");
	printf("\n\n\t\tList of Archived Names:");
	printf("\n\n\t\tPosition\tName\n\t\t-----------------------------\n");
	while(count < NUMBER_NAMES) {
		fgets(names_list[count], sizeof(names_list[count]), fp_names);
		printf("\t\t%d\t\t%s", count, names_list[count]);
		count++;
    }
	
	printf("\n\n\t\tType a name to search: ");
	fgets(name, sizeof(name), stdin);
	
	for(count = 0; count < NUMBER_NAMES; count++) {
		if((strcmp(names_list[count], name) == 0)) {
			printf("\n\n\t\tWAS FOUND !\n\n\t\t\tName:\n\t\t\t%s\n\t\t\tPosition:\n\t\t\t%d\n\n", names_list[count], count);
			aux_count = 1;
		}
	}
	if(aux_count != 1)
		printf("\n\n\t\t\tWAS NOT FOUND !\n\n");
}

void search_names_typed() {
	char names_list[NUMBER_NAMES][BUFFER_SIZE];
	char name[BUFFER_SIZE];
	int count = 0;
	int accumulator = 0;
	int aux_count = 0;

	printf("\n\n\t\tLet's create our List of Names\n\n");
	while(count < NUMBER_NAMES) {
		system("clear");
		printf("\n\n\t\tType a Name to Position %d: ", count);
		scanf("%[^\n]s", names_list[count]);
		setbuf(stdin, NULL);
		count++;
	}

	system("clear");
	printf("\n\n\t\tList of Typed Names:");
	printf("\n\n\t\tPosition\tName\n\t\t-----------------------------\n");
	count = 0;
	while(count < NUMBER_NAMES) {
		printf("\t\t%d\t\t%s\n", count, names_list[count]);
		count++;
    }

	printf("\n\n\t\tType a name to search: ");
	scanf("%[^\n]s", name);
	
	for(count = 0; count < NUMBER_NAMES; count++) {
		if((strcmp(names_list[count], name) == 0)) {
			printf("\n\n\t\tWAS FOUND !\n\n\t\t\tName:\n\t\t\t%s\n\n\t\t\tPosition:\n\t\t\t%d\n\n", name, count);
			aux_count = 1;
		}
	}
	if(aux_count != 1)
		printf("\n\n\t\t\tWAS NOT FOUND !\n\n");
}
