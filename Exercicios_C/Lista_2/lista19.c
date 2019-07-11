#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUANTITY_PRODUCTS 999
#define QUANTITY_PRODUCTS 20
#define PRODUCT_NAME_SIZE 80
#define BASE_PRICE 100.00
#define PERCENT 0.05

typedef struct {
  char name[PRODUCT_NAME_SIZE];
  float price;
} Product;

void create_sales(Product sales[]);
void order_sales(Product sales[]);
void update_sales(Product sales[]);
void print_sales(Product sales[]);


int main() {
  Product sales[QUANTITY_PRODUCTS];

  system("clear");
  printf("\n\n\tSistema de Vendas\n\n");

  create_sales(sales);
  order_sales(sales);
  update_sales(sales);
  print_sales(sales);

   return 0;
}

void create_sales(Product sales[]) {
  printf("\n\nGerando Vendas\n\n");

  for (int i = 0; i < QUANTITY_PRODUCTS; i++) {
    printf("Nome do %do. produto: ", (i + 1));
    scanf("%s", sales[i].name);
    
    printf("Preco do %do. produto: R$ ", (i + 1));
    scanf("%f", &sales[i].price);
    
    printf("Venda do Produto %d Registrada!!!\n\n", (i + 1));
  }

  printf("\n\nTodas as Vendas foram Registrada!!!\n\n");
}

void order_sales(Product sales[]) {
  int i, j;
  Product aux;
  
  for (i = 0; i < QUANTITY_PRODUCTS; i++) {
    for (j = 0; j < (QUANTITY_PRODUCTS - 1); j++) {
      if (sales[j].name[0] > sales[j + 1].name[0]) {
        aux = sales[j + 1];
        sales[j + 1] = sales[j];
        sales[j] = aux;
      }
    }
  }
}

void update_sales(Product sales[]) {
  for (int i = 0; i < QUANTITY_PRODUCTS; i++) {
    if(sales[i].price < BASE_PRICE)
      sales[i].price += (sales[i].price * PERCENT);
  }
}

void print_sales(Product sales[]) {
  printf("\n\n\tListagem Vendas Realizadas\n\n");

  printf("\tCd.\t");
  printf("\tProduto");
  printf("\t\t\tPreco (R$)");
  printf("\n\t--------------------------------------------------\n");
  for (int i = 0; i < QUANTITY_PRODUCTS; i++) {
    printf("\t%-10d\t%-24s%2.2f\n", (i + 1), sales[i].name, sales[i].price);
  }

  printf("\n\n");
}