#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRUCT_SIZE 999
#define STRUCT_SIZE 100
#define NAME_SIZE 30
#define ADDRESS_SIZE 100
#define PHONE_SIZE 10

typedef struct {
  char name[NAME_SIZE];
  char address[ADDRESS_SIZE];
  char phone[PHONE_SIZE];
  long int zip_code;
} Book;

typedef struct {
  Book contact_list[STRUCT_SIZE];
  int num_record;
} Contacts;

Book book;
Contacts contacts;

void create_contact();
void select_by_contact();
void select_by_first_letter();
void main_menu(char title[]);
void clean_data();
int is_empty();
int is_full();
int record_found(char record[]);
int first_letter_found(char letter[]);

int main(int argc, char *argv[]) {
  while (argc == 1) {
    fprintf(stderr, "\n\n\tPrecisamos nomear a agenda!!!\n\tFaca assim: %s Nome_da_Agenda\n\tTente novamente!!!\n\n", argv[0]);
    return 1;
  }

  main_menu(argv[1]);
  contacts.num_record = 0;
  
  return 0;
}

void main_menu(char title[]) {
  int opt;
  
  do {
    system("clear");

    printf("\n\n\t%s\n\n", title);
    
    printf("\n\nMenu de Opcoes:\n\n");
    printf("[ 1 ] - Zerar agenda\n");
    printf("[ 2 ] - Inserir novo contato\n");
    printf("[ 3 ] - Selecionar contato por nome\n");
    printf("[ 4 ] - Selecionar contatos por inicial do nome (imprimir)\n");
    printf("[ 0 ] - Sair\n");
    printf("\nQual e sua opcao: ");
    scanf("%d", &opt);
    setbuf(stdin, NULL);

    switch (opt) {
      case 1:
        clean_data();
        getchar();
        getchar();
        setbuf(stdin, NULL);
        break;
      case 2:
        create_contact();
        getchar();
        getchar();
        setbuf(stdin, NULL);
        break;
      case 3:
        select_by_contact();
        getchar();
        getchar();
        setbuf(stdin, NULL);
        break;
      case 4:
        select_by_first_letter();
        getchar();
        getchar();
        setbuf(stdin, NULL);
        break;
      case 0:
        printf("\n\nSaindo...\n\n");
        break;
      default:
        printf("\nOpcao nao existente!!!");
        getchar();
        getchar();
        setbuf(stdin, NULL);
        break;
    }
  } while (opt != 0);
}

void create_contact() {
  if ((is_full()) == 0)
    printf("\n\nEstrutura esta Cheia\n\n");
  
  if ((is_full()) == 1) {
    printf("\n\nCadastro de Contatos:\n\n");
    
    printf("Digite o nome: ");
    fgets(contacts.contact_list[contacts.num_record].name, sizeof(contacts.contact_list[contacts.num_record].name), stdin);
    printf("Digite o Endereco: ");
    fgets(contacts.contact_list[contacts.num_record].address, sizeof(contacts.contact_list[contacts.num_record].address), stdin);
    printf("Digite o telefone: ");
    fgets(contacts.contact_list[contacts.num_record].phone, sizeof(contacts.contact_list[contacts.num_record].phone), stdin);
    printf("Digite o CEP: ");
    scanf("%ld", &contacts.contact_list[contacts.num_record].zip_code);

    contacts.num_record++;

    printf("\n\nOK!!! Cadastro Realizado!!!\n\n");
  }
}

void select_by_contact() {
  if ((is_empty()) == 0)
    printf("\n\nEstrutura esta Vazia\n\n");
  
  if ((is_empty()) == 1) {
    char searched_name[NAME_SIZE];
    int i;

    printf("\n\nBusca de Registro(s) por Nome:\n\n");

    printf("Digite o nome: ");
    fgets(searched_name, sizeof(searched_name), stdin);

    if ((record_found(searched_name)) == 0) {
      printf("\n\n\tRegistro(s) Encontrado(s):\n\n");
      
      for (i = 0; i < contacts.num_record; i++) {
        if ((strcmp(searched_name, contacts.contact_list[i].name)) == 0) {
          printf("\tID.: %d\n", (i + 1));
          printf("\tNome: %s", contacts.contact_list[i].name);
          printf("\tEndereco: %s", contacts.contact_list[i].address);
          printf("\tTelefone: %s", contacts.contact_list[i].phone);
          printf("\tCEP: %ld\n", contacts.contact_list[i].zip_code);
          printf("\n");
        }
      }
    }

    if ((record_found(searched_name)) == 1)
      printf("\n\tRegistro(s) Nao Encontrado(s): \n\n");
  }
}

void select_by_first_letter() {
  if ((is_empty()) == 0)
    printf("\n\nEstrutura esta Vazia\n\n");
  
  if ((is_empty()) == 1) {
    char searched_letter[NAME_SIZE];
    int i;

    printf("\n\nBusca de Registro(s) por Inicial do Nome:\n\n");

    printf("Digite a inicial (primeira letra) do nome: ");
    fgets(searched_letter, sizeof(searched_letter), stdin);

    if ((first_letter_found(searched_letter)) == 0) {
      FILE *list_file;
      char *file_name = "Exerc20_Listagem_por_Inicial.txt";

      if((list_file = fopen(file_name, "w")) == NULL) {
        printf("\n\nNao foi possivel criar o Arquivo %s!!!\n\n", file_name);
        exit(EXIT_FAILURE);
      }
      
      printf("\n\n\tRegistro(s) Encontrado(s), Impresso em arquivo [ %s ]!!!\n\n", file_name);

      fprintf(list_file, "\n\n\tRegistro(s) Encontrado(s):\n\n");

      
      for (i = 0; i < contacts.num_record; i++) {
        if (searched_letter[0] == contacts.contact_list[i].name[0]) {
          fprintf(list_file, "\tID.: %d\n", (i + 1));
          fprintf(list_file, "\tNome: %s", contacts.contact_list[i].name);
          fprintf(list_file, "\tEndereco: %s", contacts.contact_list[i].address);
          fprintf(list_file, "\tTelefone: %s", contacts.contact_list[i].phone);
          fprintf(list_file, "\tCEP: %ld\n", contacts.contact_list[i].zip_code);
          fprintf(list_file, "\n");
        }
      }

      fclose(list_file);
    }

    if ((first_letter_found(searched_letter)) == 1)
      printf("\n\tRegistro(s) Nao Encontrado(s): \n\n");
  }
}

void clean_data() {
  if ((is_empty()) == 0)
    printf("\n\nEstrutura esta Vazia\n\n");
  
  if ((is_empty()) == 1) {
    for (contacts.num_record = 0; contacts.num_record < STRUCT_SIZE; contacts.num_record++) {
      strcpy(contacts.contact_list[contacts.num_record].name, "NULL");
      strcpy(contacts.contact_list[contacts.num_record].address, "NULL");
      strcpy(contacts.contact_list[contacts.num_record].phone, "NULL");
      contacts.contact_list[contacts.num_record].zip_code = 0;
    }

    contacts.num_record = 0;

    printf("\n\nOK!!! Estrutura Resetada!!!\n\n");
  } 
}

int is_empty() {
  if (contacts.num_record == 0)
    return 0;

  if (contacts.num_record != 0)
    return 1;
}

int is_full() {
  if (contacts.num_record == STRUCT_SIZE)
    return 0;

  if (contacts.num_record < STRUCT_SIZE)
    return 1;
}

int record_found(char record[]) {
  for (int i = 0; i < contacts.num_record; i++) {
    if ((strcmp(record, contacts.contact_list[i].name)) == 0) {
      return 0;
    }  
  }

  return 1;
}

int first_letter_found(char letter[]) {
  for (int i = 0; i < contacts.num_record; i++) {
    if (letter[0] == contacts.contact_list[i].name[0]) {
      return 0;
    }  
  }

  return 1;
}