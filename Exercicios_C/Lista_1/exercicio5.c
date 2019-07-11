#include <stdio.h>
/*
	5 -  Condicional – Crie um programa em C usando condicional para exibir em tela as mensagens “Foo é maior que bar” e “Bar é maior que Foo” considerando os valores das variáveis abaixo
*/

int main() {
	
	int foo = 1;
	int bar = 2;
	
	if(foo > bar)
		printf("Foo (%d) e maior que Bar (%d) \n", foo, bar);
	else
		printf("Bar (%d) e maior que Foo (%d) \n", bar, foo);
	
	return 0;

}
		
