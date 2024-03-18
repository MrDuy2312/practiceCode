#include <stdio.h>

int main(){
  int n;

  printf("nhap n:");
  scanf("%d", &n);

  while(n < 0){
    printf("nhap lai!\n");
    printf("nhap n:");
    scanf("%d", &n);
  }

  int i;
  int max;
  for(i = 1; i < n; i++){
    if((n % i == 0) && (i % 2 != 0) ){
      max = i;
    }
  }
  printf("so %d la uoc le lon nhat cua so %d\n", max, n);
  return 0;   
}
