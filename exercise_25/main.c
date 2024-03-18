#include<stdio.h>

int main(){
  int n;
  int S = 0;
  do{
    printf("nhap n: ");
    scanf("%d", &n);
    if(n < 1){
      printf("nhap lai!!!\n");
    }
  }while(n < 1);

  for(int i = 1; i <= n; i++){
    if(n%i == 0){
      if(i%2 == 0){
        S += i;
        printf("Ket Qua S la %d\n", S);
      }
    }
  }

  printf("Ket Qua S la %d\n", S);
  return 0;
}
