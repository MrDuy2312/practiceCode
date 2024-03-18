#include <stdio.h>

int main() {
  int n;
  int S = 0;
  
  printf("nhap n: ");
  scanf("%d", &n);

  for(int i = 0; i <= n; i++) {
      S += i;
  }

  printf("Ket qua la %d\n",S);
  return 0;
}
