#include<stdio.h>

int main(){
  int i;
  int n;
  int S = 0;
  int P = 1;  
  do{
    printf("nhap n: ");
    scanf("%d", &n);
    if(n < 1){
      printf("nhap lai!!\n");
    }
  }while(n < 1);

  for(i = 1; i <= n; i++){
    P *= i; 
    S += P;
  }

  printf("ket qua la %d\n", S);
  return 0;
}