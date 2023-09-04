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
