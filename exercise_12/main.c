#include <stdio.h>

int main(){
  int i;
  int n;
  int x;
  int S;
  int P = 1; 

  printf("nhap x: ");
  scanf("%d",&x);
  printf("nhap n: ");
  scanf("%d",&n);
  
  for(i = 1; i <= n; i++){
    P *= x;
    S += P;
  }

  printf("ket qua la %d\n", S);
  return 0;
}