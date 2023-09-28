#include <stdio.h>
#include <math.h>

enum tabela {Spo = 1, Bot, Pal, Gre, Bra, Flu, Apr, Fla, For, Amg};

int main(void) {
  enum tabela input;
  printf("Digite a posição na tabela que você deseja ver: ");
  scanf("%d", ((int*)&input));

  switch (input) {
  case Spo:
    printf("\nSegue o Líder, é o Leão!\n");
    break;
  case Bot:
    printf("\nSegundo não é rão ruin vai\n");
    break;
  case Pal:
    printf("\nOia Terceirão\n");
    break;
  case Gre:
    printf("\nPelo menos vai para a liberta\n");
    break;
  case Bra:
    printf("\nSó mais um poquinho e a vaga do Braga é na fase de grupos\n");
    break;
  case Flu:
    printf("\nTe cuida não visse\n");
    break;
  case Apr:
    printf("\nBORA DAR UM GÁS!\n");
    break;
  case Fla:
    printf("\nkkkkkkkkk Flamengo\n");
    break;
  case For:
    printf("\nSegundo maior do nordeste\n");
    break;
  case Amg:
    printf("\nCom esse elenco 10° é meio paia\n");
    break;
  default:
    printf("\nTu num entendeu minha pergunta não foi?\n");
    break;
  }
  
  return 0;
}
