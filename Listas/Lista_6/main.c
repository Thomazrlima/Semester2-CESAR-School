#include "function.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  Livro livro;
  char resp;
  FILE *fptr;

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

  fflush(fptr);
  fseek(fptr,0,0);

  puts("\n\nLISTA DE LIVROS DO ARQUIVO ");
  puts("==================================");

  while(fread(&livro,sizeof(Livro),1,fptr) == 1){
    PrintLivro(livro);
  }
  fclose(fptr);
  system("pause");
  
  return 0;
}
