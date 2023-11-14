#include "function.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    struct node *head = NULL;
    int escolha;

    do {
        escolha = Menu();
        Caminho(escolha, &head);
    } while (1);

    return 0;
}
