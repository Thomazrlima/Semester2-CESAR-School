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

void deletar(struct node **head, char *var) {
    struct node *n = *head;
    struct node *prev = NULL;
    while (n != NULL && strcmp(n->livro.Titulo, var) != 0) {
        prev = n;
        n = n->next;
    }
    if (n == NULL) {
        printf("Livro não encontrado.\n");
        return;
    }
    if (prev == NULL) {
        *head = n->next;
    } else {
        prev->next = n->next;
    }
    free(n);
}

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