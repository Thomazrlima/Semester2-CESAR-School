#include "function.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Menu(void){
  int escolha;
  printf("O que você deseja fazer?\n");
  printf("1 - Cadastrar livro\n");
  printf("2 - Listar livros\n");
  printf("3 - Buscar livro\n");
  printf("4 - Excluir livro\n");
  printf("5 - Finalizar\n");
  printf("Opcao: ");
  scanf("%d",&escolha);
  return escolha;
}

int Caminho(int escolha, Livro livro){
  switch(escolha){
    case (1):
      GetLivro();
    case (2):
      PrintLivro(livro);
  }
}