#include <stdio.h>

int main(){
  int n;

  do{
    printf("nhap n:");
    scanf("%d", &n);
  }while(n < 0);

  int i;
  int S;
  for(i = 1; i < n; i++){
    if(n % i == 0){
      S += i;
    }
  };
  if(S == n){
    printf("so %d la so hoan thien!\n", n);
  }
  else{
    printf("so %d khong phai la so hoan thien!\n", n);
  }
  return 0;
}
