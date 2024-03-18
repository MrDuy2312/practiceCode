#include<stdio.h>
#include<math.h>

int Ex70_Nhap(){
    int Nhap;
    printf("nhap so:");
    scanf("%d", &Nhap);
    return Nhap;
}

float Ex70_Tinh(int n){
    float Tinh = 0;
    float Trung_gian = 0;
    for(int i = 1; i <= n; i++){
        Trung_gian += i;
        Tinh += (float)pow((-1), i+1)*(1/Trung_gian);
        printf("S(%d) : %.2f\n", i, Tinh);
    }
    return Tinh;
}

int main(){
    int n;
    float S = 0;
    n = Ex70_Nhap();
    S = Ex70_Tinh(n);
    return 0;
}