#include<stdio.h>

int main(){
  int n;

  do{
    printf("nhap n: ");
    scanf("%d",&n);
    if(n < 1){
      printf("nhap lai!!!");
    }
  }while(n < 1);

  printf("uoc so le gom\n");

  for(int i = 1; i <= n; i++){
    if(n%i == 0){
      if(i%2 != 0){
        printf("%d\t", i);
      }
    }
  }
  printf("\n");
  return 0;
}
