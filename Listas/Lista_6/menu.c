#include "function.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Menu(void) {
    int escolha;
    printf("O que você deseja fazer?\n");
    printf("1 - Cadastrar livro\n");
    printf("2 - Listar livros\n");
    printf("3 - Buscar livro\n");
    printf("4 - Excluir livro\n");
    printf("5 - Finalizar\n");
    printf("Opcao: ");
    scanf("%d", &escolha);
    return escolha;
}

void Caminho(int escolha, struct node **head) {
    Livro livro;

    switch (escolha) {
        case 1:
          
            printf("\n\tDigite o titulo: ");
            fgets(livro.Titulo, 50, stdin);
            printf("\n\tDigite o nome do autor: ");
            fgets(livro.Autor, 50, stdin);
            printf("\n\tDigite o numr do registro: ");
            scanf("%d", &livro.NumReg);
            printf("\n\tDigite o preco do livro: ");
            scanf("%lf", &livro.Preco);
            rewind(stdin);

            *head = adicionar(head, livro, livro.Titulo);
            break;

        case 2:
            PrintLivro(*head);
            break;

        case 5:
            exit(0);

        default:
            printf("Opção inválida.\n");
    }
}