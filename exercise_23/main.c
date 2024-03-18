#include<stdio.h>

int main(){
  int n;
  int S = 0;

  do{
    printf("nhap n: ");
    scanf("%d", &n);
    if(n < 1){
      printf("nhap lai!!");
    }
  }while(n < 1);

  for(int i = 1; i <= n; i++){
    if(n%i == 0){
      S += 1;
      printf("Uoc so la %d\n", i);
      printf("co %d so uoc cua so nguyen duong %d\n", S, n);
    }
  }
  return 0;
}
