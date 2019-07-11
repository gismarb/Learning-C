#include <stdio.h>
/*
	6 - Condicional – Crie um programa em C usando condicional para exibir em tela as mensagens “Foo é maior que bar” e “Bar é maior que Foo” considerando valores lidos pelo teclado e/ou de uma entrada externa como arquivo. Sugestão use o comando scanf()
*/

int main() {
	
	int foo = 0;
	int bar = 0;
	
	printf("Digite Valor de Foo: ");
	scanf("%d", &foo);
	printf("Digite Valor de Bar :");
	scanf("%d", &bar);
	
	if(foo > bar)
		printf("Foo (%d) e maior que Bar (%d) \n", foo, bar);
	else if(foo < bar)
		printf("Bar (%d) e maior que Foo (%d) \n", bar, foo);
	else
		printf("Os Valores de Foo (%d) e Bar (%d) sao iguais \n", foo, bar);
	
	return 0;

}
		
