#include <stdio.h>

int main(void) {
float A, B, C, D;
int i;
  
scanf("%f %f %f\n", &A, &B, &C);

for (i = 0; i < 9; i ++){
  if (A < B){
    D = A;
    A = B;
    B = D;
  }
  if (B < C){
    D = B;
    B = C;
    C = D;
  }
}

if (A >= (B+C)){
printf("NAO FORMA TRIANGULO\n");
}
else{
  if ((A*A) > ((B*B)+(C*C))){
  printf("TRIANGULO OBTUSANGULO\n");
  }
else if ((A*A) < ((B*B)+(C*C))){
  printf("TRIANGULO ACUTANGULO\n");
  }
else if ((A*A) == ((B*B)+(C*C))){
  printf("TRIANGULO RETANGULO\n");
  }
if (A == B && B == C){
  printf("TRIANGULO EQUILATERO\n");
}
else if (A == B || B == C || A == C){
  printf("TRIANGULO ISOSCELES\n");
  }
}
return 0;
}

/*Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).*/
