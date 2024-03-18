#include<stdio.h>
#include<math.h>

int main(){
  int n;
  do{
    printf("nhap n:");
    scanf("%d", &n);
    if(n < 0){
      printf("nhap lai\n");
    }
  }while(n < 0);

  int i;
  float bt34_Tong = 0;

  for(i = 1; i <= n; i++){
    bt34_Tong = sqrt(i + bt34_Tong);
    printf("Tong la: %f\n", bt34_Tong);
  }
  return 0;
}
