#include<stdio.h>
#include<math.h>

int ex71_Nhap(){
    int Nhap;
    printf("nhap so:");
    scanf("%d", &Nhap);
    return Nhap;
}

float ex71_Tinh(int x, int n){
    float Tinh = 0;
    int Trung_Gian = 0;
    for(int i = 1; i <= n; i++){
        Trung_Gian += i;
        Tinh += (float)pow((-1), i)*((pow(x , i))/Trung_Gian);
        printf("S(%d,%d) : %f\n", x, i, Tinh);
    }
    return Tinh;
}
int main(){
    int x, n;
    float S = 0;
    x = ex71_Nhap();
    n = ex71_Nhap();
    S = ex71_Tinh(x, n);
    return 0;
}
