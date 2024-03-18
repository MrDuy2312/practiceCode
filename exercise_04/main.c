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

  for(i = 1; i <= n; i++){
    S += (1.0/(2*i));
  }

  printf("ket qua la %.2f\n", S);
  return 0;
}