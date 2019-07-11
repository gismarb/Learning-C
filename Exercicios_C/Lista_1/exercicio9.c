/*

	9. Strings – Considere o seguinte trecho de código: Defina as variáveis first_name e last_name como John e Boe respectivamente. Explique o que faz as funções strncat() e sprintf()

*/

#include <stdio.h>
#include <string.h>

int main() {

	/* define first_name */
	/* define last_name */

    char first_name[] = {"John"};
	char last_name[] = {"Boe"};

    char name[100];
	last_name[0] = 'B';

    sprintf(name, "%s %s", first_name, last_name); /* sprintf ??? */
	if (strncmp(name, "John Boe", 100) == 0) { /* strncmp compara Strings */
		printf("Done!\n");
	}

	name[0]='\0';
	strncat(name,first_name,4); /* strncat concatena Strings */
	strncat(name,last_name,20);
	printf("%s\n",name);

	return 0;
}
