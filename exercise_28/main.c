#include<stdio.h>

int main(){
  int i;
  int n;
  int s = 0;

  printf("nhap n:");
  scanf("%d",&n);
  while(n < 0){
    printf("nhap lai!\n");
    printf("nhap n:");
    scanf("%d", &n);
  }

  for(i = 1; i < n; i++){
    if(n % i == 0){
      printf("so %d\n", i);
      s += i;
    }
  }
  printf("tong S cua so %d la : %d\n", n, s);
  return 0;
}
