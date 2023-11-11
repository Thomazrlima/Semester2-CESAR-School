#include "function.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


Livro adicionar(struct node **head, Livro livro, char *var) {
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
}

Livro GetLivro(){
  Livro livro;
  printf("\n\tDigite o titulo: ");
  fgets(livro.Titulo,50,stdin);
  printf("\n\tDigite o nome do autor: ");
  fgets(livro.Autor,50,stdin);
  printf("\n\tDigite o numr do registro: ");
  scanf("%d",&livro.NumReg);
  printf("\n\tDigite o preco do livro: ");
  scanf("%lf", &livro.Preco);
  rewind(stdin);

  return livro;
}

void PrintLivro(Livro livro){
  printf("\n\tTitulo: %s\n", livro.Titulo);
  printf("\tAutor: %s\n", livro.Autor);
  printf("\tNo.Reg: %d\n", livro.NumReg);
  printf("\tPreco: %.2lf\n", livro.Preco);
}