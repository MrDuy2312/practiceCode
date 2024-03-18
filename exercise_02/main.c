#include <stdio.h>

int main() {
  int i;
  int S = 0;
  int n;

  do {
    printf("nhap n: ");
    scanf("%d", &n);
  } while(n < 1);

  for(i = 0; i <= n; i++)
  {
    S += i*i;
  }
  printf("ket qua la %d\n", S);

  return 0;
}