#include<stdio.h>
#include<math.h>

int tinhTu(int x,int n){
  int soMu;
  int tuSo = 1;
  soMu = 2*n;
  for(int i = 0; i < soMu; i++){
    tuSo *= x;
  }
  return tuSo;
}

int tinhMau(int n){
  int mauSo = 1;
  for(int i = 1; i <= (2*n); i++){
    mauSo *= i;
  }
  return mauSo;
}

int main(){
  float S = 1;
  int i;
  int n;
  int x; 
  printf("nhap n: ");
  scanf("%d", &n);
  printf("nhap x: ");
  scanf("%d", &x);
  for(i = 1; i <= n; i++){
    S += (float)tinhTu(x, i)/tinhMau(i);
  }

  printf("ket qua la %.2f\n", S);
  return 0;
}
