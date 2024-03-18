/*kiem tra so chinh phuong*/
#include <stdio.h>

int main(){
  int n;
  do{
    printf("nhap n:");
    scanf("%d", &n);
    if(n < 0){
      printf("lap lai nha!!\n");
    }
  }while(n < 0);

  int i;
  for(i = 0; i*i <= n; i++){
    if(i*i == n){
      printf("so la so chinh phuong\n");
      return 0;
    }
  }
  printf("so la ko chinh phuong\n");
  return 0;
}
