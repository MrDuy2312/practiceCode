#include<stdio.h>
#include<math.h>

// int bt36_Nhap_n(int n){
//     do{
//         printf("nhap n:");
//         scanf("%d", &n);
//         if(n < 0){
//             printf("nhap lai!!");
//         }
//     }while(n < 0);
//     return n;
// }
// int bt36_Giai_thua(int n){
//   int bt36_Giaithua = 1;
//   for(int i = 1; i <= n; i++){
//     bt36_Giaithua *= i; 
//     printf("giai thua: %d \n", bt36_Giaithua);
//   }
//   return bt36_Giaithua;
// }
// int bt36_Tinh(int n, int bt36_Giai_thua){
//   float bt36_Tong = 0;
//   for(int i = 1; i <= n; i++){
//     bt36_Tong = sqrt(bt36_Giai_thua +)
//   }
//   return bt36_Tong;
// }

int main(){
  int n;
  int bt36_Giai_thua = 1;
  float bt36_Tong = 0;
  do{
    printf("nhap n:");
    scanf("%d", &n);
    if(n < 0){
      printf("nhap lai!!");
    }
  }while(n < 0);
  printf("n: %d \n", n);
  
  for(int i = 1; i <= n; i++){
    bt36_Giai_thua *= i;
    bt36_Tong = sqrt(bt36_Giai_thua + bt36_Tong);
    printf("giai thua: %d \n", bt36_Giai_thua);
    printf("Tong la: %f\n", bt36_Tong);
  }
  return 0;
}
