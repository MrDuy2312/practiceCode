#include<stdio.h>

int main(){
  int i;
  int n;
  float S = 0;
  int Y;  
  do{
    printf("nhap n: ");
    scanf("%d", &n);
    if(n < 1){
      printf("nhap lai!!\n");
    }
  }while(n < 1);

  for(i = 1; i <= n; i++){
    Y += i; 
    S += 1.0/Y;
  }

  printf("ket qua la %.2f\n", S);
  return 0;
}