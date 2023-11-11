#include "function.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  Livro livro;
  char resp;
  FILE *fptr;
  int escolha;
  
  escolha = Menu();
  Caminho(escolha, livro);

  fptr = fopen("livros.dat", "ab+");
  if(fptr == NULL){
    exit(1);
  }else{
    do{
      livro = GetLivro();
      if(fwrite(&livro,sizeof(Livro),1,fptr)!=1){
        break;
      }
      
      printf("Mais um livro (s/n)? ");
      scanf(" %c",&resp);
    }while(resp != 'n' && resp !='N');
  }
  
  return 0;
}
