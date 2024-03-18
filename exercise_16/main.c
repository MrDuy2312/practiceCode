#include<stdio.h>

int main(){
  int i;
  int n;
  int x;
  float S = 0;
  int P = 1;
  int Y;  
  printf("nhap n: ");
  scanf("%d", &n);
  printf("nhap x: ");
  scanf("%d", &x);

  for(i = 1; i <= n; i++){
    Y += i; 
    P *= x;
    S += (float)P/Y;
  }

  printf("ket qua la %.2f\n", S);
  return 0;
}