#include<stdio.h>
#include<math.h>

int ex74_Nhap(){
    int Nhap;
    printf("nhap so:");
    scanf("%d", &Nhap);
    return Nhap;
}

int ex74_Mau(int n){
    int Mau = 1;
    for(int i = 1; i <= 2*n + 1; i++){
        Mau *= i;
    }
    return Mau;
}

int ex74_Tu(int x, int n){
    int Tu;
    Tu = (int)pow(x, (2*n) + 1);
    return Tu;
}

float ex74_Tinh(int x, int n){
    float Tinh = 1;
    float Trung_Gian = 0;
    for(int i = 0; i < n; i++){
        //Tinh += (float)pow((-1), i + 1)*(ex74_Tu(x, i)/ex74_Mau(i));  
        Trung_Gian = (float)ex74_Tu(x, i)/ex74_Mau(i);
        Tinh += (float)pow(-1, i + 1)*Trung_Gian;
        // printf("Tu : %d\n", ex74_Tu(x, i));
        // printf("Mau : %d\n", ex74_Mau(i));
        // printf("Trung gian : %f\n", Trung_Gian);
        printf("S(%d,%d) : %.3f\n", x, i + 1, Tinh);
        // printf("x^2n+1/2n+1! : %f\n", (pow(x , (2*i)+1))/Trung_Gian);
        // printf("(-1)^n+1 : %f\n", pow((-1), i + 1));
        // printf("S(%d,%d) : %f\n", x, i, Tinh);
    }
    return Tinh;
}
int main(){
    int x, n;
    float S = 0;
    x = ex74_Nhap();
    n = ex74_Nhap();
    S = ex74_Tinh(x, n);
    return 0;
}

