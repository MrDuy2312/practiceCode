#include <stdio.h>

int main(){
  int i;
  int n;
  float S = 0; 

  do {
    printf("nhap n: ");
    scanf("%d",&n);
    if(n < 1){
      printf("nhap lai!!\n");
    }
  } while(n < 1);

  for(i = 0; i < n; i++){
    S += ((2 * (float)i ) + 1)/(2 * i + 2);
  }

  printf("ket qua la %.2f\n", S);
  return 0;
}