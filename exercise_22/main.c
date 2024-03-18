#include<stdio.h>

int main(){
  int n;
  int S = 1;

  do{
    printf("nhap n: ");
    scanf("%d", &n);
    if(n < 1){
      printf("nhap lai!!");
    }
  }while(n < 1);

  for(int i = 1; i <= n; i++){
    if(n%i == 0){
      S *= i;
      printf("Uoc so la %d\n", i);
      printf("tich so uoc la %d\n", S);
    }
  }
  return 0;
}
