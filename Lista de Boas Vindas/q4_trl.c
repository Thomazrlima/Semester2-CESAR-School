#include <stdio.h>
 
int main() {
  int x, i;
  for (i = 0; i != 2002; i++){
   printf("");
   scanf("%d", &x);
   if (x == 2002){
    printf("Acesso Permitido\n");
    break;
   }
   else{
    printf("Senha Invalida\n");
   }
   }
  return 0; 
}
/*Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002. 
Entrada
A entrada é composta por vários casos de testes contendo valores inteiros.
Saída
Para cada valor lido mostre a mensagem correspondente à descrição do problema.*/
