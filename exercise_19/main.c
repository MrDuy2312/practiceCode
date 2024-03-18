#include<stdio.h>

int tinhTu(int x, int n){
  int tuSo = 1;
  for(int i = 1; i <= (2*n + 1); i++){
    tuSo *= x;
  }
  return tuSo;
}

int tinhMau(int n){
  int mauSo = 1;
  for(int i = 1; i <= (2*n + 1); i++){
    mauSo *= i;
  }
  return mauSo;
}


int main(){
  int n;
  int x;
  float S = 1;
  
  printf("nhap x: ");
  scanf("%d", &x);
  printf("nhap n: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    S += (float)tinhTu(x, i) / tinhMau(i);
    printf("Tu So: %d | Mau So: %d\n", tinhTu(x, i), tinhMau(i) );
  }

  printf("Ket qua la %f\n", S);
}
