#include <stdio.h>

int main(){
  int i;
  int n;
  int x;
  int S = 1; 

  printf("nhap x: ");
  scanf("%d",&x);
  printf("nhap n: ");
  scanf("%d",&n);

  for(i = 0; i < n; i++){
    S *= x;
  }

  printf("ket qua la %d\n", S);
  return 0;
}