#include "function.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node* adicionar(struct node **head, Livro livro, char *var) {
    struct node *n = *head;
    struct node *novo = (struct node *)malloc(sizeof(struct node));
    strcpy(novo->livro.Titulo, var);

    if (*head == NULL || strcmp(novo->livro.Titulo, n->livro.Titulo) < 0) {
        *head = novo;
        novo->next = NULL;
    } else {
        while (n->next != NULL && strcmp(novo->livro.Titulo, n->next->livro.Titulo) > 0) {
            n = n->next;
        }
        if (n->next == NULL) {
            novo->next = NULL;
            n->next = novo;
        } else {
            novo->next = n->next;
            n->next = novo;
        }
    }
    FILE *fptr = fopen("livros.dat", "ab");
    if (fptr == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    fwrite(&livro, sizeof(Livro), 1, fptr);
    fclose(fptr);
}

/*Livro deletar(struct node **head, char *var) {
  struct node *n = *head;
  struct node *temp;

  if (*head == NULL) {
    printf("Lista vazia.\n");
    return;
  }

  if (strcmp((*head)->livro.Titulo, var) == 0) {
    temp = *head;
    *head = (*head)->next;
    free(temp);
    return;
  }

  while (n->next != NULL && strcmp(n->next->livro.Titulo, var) != 0) {
    n = n->next;
  }

  if (n->next == NULL) {
    printf("Livro não encontrado.\n");
    return;
  }

  temp = n->next;
  n->next = n->next->next;
  free(temp);
}*/

void PrintLivro() {
  FILE *fptr = fopen("livros.dat", "rb");

  if (fptr == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return;
  }

  puts("\n\nLISTA DE LIVROS DO ARQUIVO ");
  puts("==================================");

  Livro livro;

  while (fread(&livro, sizeof(Livro), 1, fptr) == 1) {
    printf("\n\tTitulo: %s\n", livro.Titulo);
    printf("\tAutor: %s\n", livro.Autor);
    printf("\tNo.Reg: %d\n", livro.NumReg);
    printf("\tPreco: %.2lf\n", livro.Preco);
  }

  fclose(fptr);
  system("pause");
}