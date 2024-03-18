#include<stdio.h>


int main() {
  int i; // dem so
  float S = 0;
  int n;

  do {
    printf("nhap n: ");
    scanf("%d", &n);
    if(n < 1){
      printf("nhap lai:\n");
    }
  } while(n < 1);
   
   for(i = 1; i <= n; i++){
    S += 1.0/i;
   }
   printf("ket qua la %.2f\n", S);
   return 0;
}