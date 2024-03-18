#include <stdio.h>
// #include <conio.h>
#include <math.h>

int main(){
  int n;
  printf("nhap n:");
  scanf("%d", &n);

  float bt33_Tong = 0;

  for(int i = 1; i <= n; i++){
    // if(i == 1){
    //   bt33_Tong = sqrt(2);
    //   printf("Tong la %f\n", bt33_Tong);
    // }
    // else{
    //   bt33_Tong = sqrt((float)(2 + bt33_S)); 
    //   printf("i: %d\n", i);
    //   printf("Tong la %f\n", bt33_Tong);
    bt33_Tong = sqrt(2 + bt33_Tong);
    printf("Tong la %f\n", bt33_Tong);
  }

  return 0;
}

