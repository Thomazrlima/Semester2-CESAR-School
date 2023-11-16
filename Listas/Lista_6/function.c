#include "function.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node adicionar(struct node **head, Livro livro, char *var) {
    struct node *n = *head;
    struct node *novo = (struct node *)malloc(sizeof(struct node));
    novo->livro = livro;

    if (*head == NULL) {
        *head = novo;
        novo->next = NULL;
    }

    else if(strcmp(novo->livro.Titulo, n->livro.Titulo) < 0){
        novo->next = *head;
        *head = novo;
    }else {
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
}

<<<<<<< HEAD
void listar() {
=======
void listar(struct node *head) {
>>>>>>> 12175c2e6809c957a72886ca9d85a6db6556300f
  FILE *fptr = fopen("livros.dat", "rb");

  if (fptr == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return;
  }

  puts("\n\nLISTA DE LIVROS SALVOS ");
  puts("==================================");

  Livro livro;

  while (fread(&livro, sizeof(Livro), 1, fptr) == 1) {
    printf("\nTitulo: %s\n", livro.Titulo);
    printf("\tAutor: %s\n", livro.Autor);
    printf("\tNo.Reg: %d\n", livro.NumReg);
    printf("\tPreco: %.2lf\n", livro.Preco);
  }

  fclose(fptr);
  printf("\n");

  if (head == NULL) {
    printf("\nNenhum livro não salvo na lista encadeada.\n");
    return;
  }
  
}

void pesquisar(char *var2) {
    FILE *fptr = fopen("livros.dat", "rb");

    if (fptr == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

<<<<<<< HEAD
    Livro livro;

    while (fread(&livro, sizeof(Livro), 1, fptr) == 1) {
        if (strcmp(livro.Titulo, var2) == 0) {
            printf("\nLivro encontrado!\n");
            printf("Titulo: %s\n", livro.Titulo);
            printf("Autor: %s\n", livro.Autor);
            printf("No.Reg: %d\n", livro.NumReg);
            printf("Preco: %.2lf\n", livro.Preco);
            fclose(fptr);
            return;
        }
    }

    fclose(fptr);
    printf("\nLivro não encontrado!\n");
}

void editar(struct node **head, char *var){
=======
      Livro livro;

      while (fread(&livro, sizeof(Livro), 1, fptr) == 1) {
          livro.Titulo[strcspn(livro.Titulo, "\n")] = '\0';

          if (strcasecmp(livro.Titulo, var2) == 0) {
              printf("\nLivro encontrado!\n");
              printf("Titulo: %s\n", livro.Titulo);
              printf("Autor: %s\n", livro.Autor);
              printf("No.Reg: %d\n", livro.NumReg);
              printf("Preco: %.2lf\n", livro.Preco);
              printf("\n");
              fclose(fptr);
              return;
          }
      }

      fclose(fptr);
      printf("\nLivro não encontrado!\n");
  }


/*void editar(struct node **head, char *var){
>>>>>>> 12175c2e6809c957a72886ca9d85a6db6556300f
  struct node *n = *head;
  while (n != NULL && strcasecmp(n->livro.Titulo, var) !=
     0) {
    n = n->next;
  }
  if (n == NULL) {
    printf("Livro não encontrado.\n");
    return;
  }
  printf("Digite o novo título do livro: ");
  char novo_titulo[50];
  getchar();
  fgets(novo_titulo, 50, stdin);
  strcpy(n->livro.Titulo, novo_titulo);

  FILE *fptr = fopen("livros.dat", "r+b");
  if (fptr == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
  }

  fseek(fptr, -sizeof(Livro), SEEK_CUR);
  fwrite(&n->livro, sizeof(Livro), 1, fptr);
  fclose(fptr);
  printf("Livro editado com sucesso.\n");
}*/

void salvar(struct node **head) {
    struct node *n = *head;
    Livro livro;
    FILE *fptr;

    fptr = fopen("livros.dat", "ab+");
    if (fptr == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);

    } else {
        fseek(fptr, 0, SEEK_END);

      while (n != NULL) {
      livro = n->livro;

      if (fwrite(&livro, sizeof(Livro), 1, fptr) != 1) {
        printf("Erro ao escrever no arquivo.\n");
        break;
      }

      struct node *temp = n;
        n = n->next;
        free(temp);
      }

      *head = NULL;
      fclose(fptr);
    }
}

void deletar(struct node **head, char *var) {
    struct node *n = *head;
    struct node *temp;

    if (n != NULL && strcmp(n->livro.Titulo, var) == 0) {
        *head = n->next;
        free(n);
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

    printf("Livro %s excluído com sucesso.\n", var);
}