#include <stdio.h>

int calc(int H1, int M1, int H2, int M2);
int main(void) {

  while(1){
    int H1, M1, H2, M2, tempo;
      scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
      if (H1 == 0 && M1 == 0 && H2 == 0 && M2 ==0){
      break;
    }
    tempo = calc(H1, M1, H2, M2);
    printf("%d\n", tempo);
  }
   
  return 0;
}

int calc(int H1, int M1, int H2, int M2){
  int result;
  if(H1 >= H2){
    if (M2 > M1 && H1 == H2){
      result = ((H2*60)+M2) - ((H1*60)+M1);
    }
    else{
      result = 24*60 - (((H1*60)+M1) - ((H2*60)+M2));
    }
  }
  else{
    result = ((H2*60)+M2) - ((H1*60)+M1);
  }  
  return result;
}
