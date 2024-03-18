#include<stdio.h>
#include<math.h>

int ex73_Nhap(){
    int Nhap;
    printf("nhap so:");
    scanf("%d", &Nhap);
    return Nhap;
}

float ex73_Tinh(int x, int n){
    float Tinh = -1;
    int Trung_Gian = 1;
    if(n == 0){
        printf("S(%d,%d) : %f\n", x, n, Tinh);
    }
    else{
        int k = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= 2; j++){              
                Trung_Gian *= k;
                k++;
            }
        Tinh += (float)pow((-1), i + 1)*((pow(x , 2*i))/Trung_Gian);
        // printf("Trung gian : %d\n", Trung_Gian);
        // printf("x^2n/2n! : %f\n", (pow(x , 2*i))/Trung_Gian);
        // printf("(-1)^n+1 : %f\n", pow((-1), i + 1));
        printf("S(%d,%d) : %f\n", x, i, Tinh);
        }
    }
    return Tinh;
}
int main(){
    int x, n;
    float S = 0;
    x = ex73_Nhap();
    n = ex73_Nhap();
    S = ex73_Tinh(x, n);
    return 0;
}
