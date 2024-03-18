#include<stdio.h>
#include<math.h>

int main(){
  int n;
  do{
    printf("nhap n:");
    scanf("%d", &n);
    if(n < 0){
      printf("nhap lai!\n");
    }  
  }while(n < 0);

  int i;
  float bt35_Tong = 0;

  printf("n :%d\n", n);

  for(i = n ; i > 0; i--){
    bt35_Tong = sqrt(i + bt35_Tong);
    printf("i :%d\n", i);
    printf("Tong la:%f\n", bt35_Tong);
  }

  return 0;
}
