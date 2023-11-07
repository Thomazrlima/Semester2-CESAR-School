#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
  char nome[21];
  struct node *next;
};

void printList(struct node *head);
void adicionar(struct node **head, char *nome);

int main(void) {
  int N, i;
  char nome[21];
  struct node *head = NULL;

  scanf("%d", &N);

  for(i=0; i < N; i++){
    scanf("%s", nome);
    adicionar(&head, nome);
  }
  printList(head);

  return 0;
}

void adicionar(struct node **head, char *nome){
  struct node *n = *head;
  struct node *novo = (struct node *)malloc(sizeof(struct node));
  strcpy(novo->nome,nome);

  if(*head == NULL){
     *head = novo;
     novo->next = NULL;
  }else{

    if(strcmp(novo->nome, n->nome) < 0){
      novo->next = n;
      *head = novo;
    }
    else{
    while(n->next != NULL && strcmp(novo->nome, nome) < 0){
        if (strcmp(novo->nome, nome) == 0){
            free(novo);
        }else{
          n = n->next;
        }
    }
    if(n->next == NULL){
      novo->next = NULL;
      n->next = novo;  
    }else{
      novo->next = n->next;
      n->next = novo;
     } 
   }
  }
}

void printList(struct node *head){
  struct node *n = head;
  while(n!= NULL){
    printf(" %s ",n->nome);
    n = n -> next;
  }
  printf("\n");
}
