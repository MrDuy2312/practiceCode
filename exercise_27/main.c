#include<stdio.h>

int main(){
  int n;
  int j = 0;
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
        j++;
      }
    }
  }

  printf("co %d so luong uoc so chan cua so nguyen duong n\n", j);
  return 0;
}
