#include<stdio.h>

int main(){
  int n;

  do{
    printf("nhap n: ");
    scanf("%d", &n);
    if(n < 1){
      printf("nhap lai!!");
    }
  }while(n < 1);

  for(int i = 1; i <= n; i++){
    if(n%i == 0){
      printf("Uoc so la %d\n", i);
    }
  }
  return 0;
}