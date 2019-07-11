/* 

	Esquema de Rodizio de Placas Sao Paulo
	Dia		Seg		Ter		Qua		Qui		Sex
	Final	1 e 2	3 e 4	5 e 6	7 e 8	9 e 0

	Formato Placa Brasil: ABC-1234 (3 letras, separador ponto ou hifen, 4 numeros)

*/


#include <stdio.h>
#include <stdlib.h>

#define TAM_PLACA 8 

int main()
{

	char placa[TAM_PLACA] = "\0";
	int cont_err_x = 0;
	int cont_err_y = 0;
	int cont_err_z = 0;
	int cont_err_all = 0;
	char opc;
	int i;

	printf("\n\n\tComo e de conhecimento, uma placa de Carro/Moto no Brasil");
	printf("\n\te composta de 3 Letras (ABC...), hifen (-), 4 numeros (1234...), ficando ABC-1234");
	printf("\n\n\t###############################################################################################");
	printf("\n\n\t# Por convencao, voce devera usar letas MAIUSCULA, separador -, e numeros no final (ABC-1234) #");
	printf("\n\n\t###############################################################################################");
	
	do {
		printf("\n\n\tEntre com a placa do Carro no formato [ABC-1234]: ");
		scanf("%s", placa);

		for (i = 0; i < (TAM_PLACA - 5); ++i) {
			if (placa[i] < 65 || placa[i] > 90) {
				printf("\tO caracter [ %c ] e invalido (so aceito letras [ MAIUSCULAS ])\n", placa[i]);
				cont_err_x = 1;
 			}
 			else
 				cont_err_x = 0;
		}
		if (placa[3] != 45) {
			printf("\tO caracter [ %c ] e invalido (so aceito [ - ])\n", placa[3]);
			cont_err_y = 1;
		}
		else
			cont_err_y = 0;

		for (i = 4; i < (TAM_PLACA); ++i) {
			if (placa[i] < 48 || placa[i] > 57) {
				printf("\tO caracter [ %c ] e invalido (so aceito [ 0 1 2 3 4 5 6 7 8 9 ])\n", placa[i]);
				cont_err_z = 1;
 			}
 			else
 				cont_err_z = 0;
		}
		cont_err_all = (cont_err_x + cont_err_y + cont_err_z);
	} while (cont_err_all != 0);

	opc = placa[7];

	switch (opc) {
		case '1':
		case '2':
			printf("\n\n\t\tA Placa [ %s ] com Final [ %c ] esta PROIBIDA de rodar as SEGUNDAS...", placa, opc);
		break;		
		case '3':
		case '4':
			printf("\n\n\t\tA Placa [ %s ] com Final [ %c ] esta PROIBIDA de rodar as TERCAS...", placa, opc);
		break;
		case '5':
		case '6':
			printf("\n\n\t\tA Placa [ %s ] com Final [ %c ] esta PROIBIDA de rodar as QUARTAS...", placa, opc);
		break;
		case '7':
		case '8':
			printf("\n\n\t\tA Placa [ %s ] com Final [ %c ] esta PROIBIDA de rodar as QUINTAS...", placa, opc);
		break;
		case '9':
		case '0':
			printf("\n\n\t\tA Placa [ %s ] com Final [ %c ] esta PROIBIDA de rodar as SEXTAS...", placa, opc);
		break;
		default:
			printf("\n\n\t\tA Placa [ %s ] com Final [ %c ], nao faz parte do Rodizio ou nao e Valida...", placa, opc);
	}

	return 0;
}

