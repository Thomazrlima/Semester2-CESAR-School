#include <stdio.h>

int main(void) {
  float x, nx, difx;
  printf("");
  scanf("%f", &x);

  if (x <= 400){
    nx = x * 1.15;
  }else if(x <= 800){
    nx = x * 1.12;
  }else if(x <= 1200){
    nx = x * 1.10;
  }else if(x <= 2000){
    nx = x * 1.07;
  }else if(x > 2000){
    nx = x * 1.04;
  }
  difx =  nx - x;
  printf("Novo salario: %.2f\n", nx);
  printf("Reajuste ganho: %.2f\n", difx);
  printf("Em percentual: %.0f %%\n", (difx/x)*100);
  return 0;
}

/*Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.
Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.
Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste (ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho, conforme exemplo abaixo.*/
