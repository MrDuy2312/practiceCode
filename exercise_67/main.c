#include<stdio.h>
#include<math.h>
//tinh S(x,n)
int Nhap_So(char TenSo){
    int Nhap_n;
    printf("nhap so %c:", TenSo);
    scanf("%d", &Nhap_n);
    return Nhap_n;
}
int Tinh_S(int x, int n){
    int S = 0;
    int i;
    for(i = 1; i <= n; i++){
        S += (int)pow(-1, i+1)*(pow(x, i));
        printf("x^%d: %d\n",i,(int)pow(x, i));
        printf("(-1)^(%d+1): %d\n",i, (int)pow(-1, i+1));
        printf("S: %d\n", S);
    }    
    return S;
}

int main(){
    char _tenSo_1 = 'x';
    char _tenSo_2 = 'n';
    int x;
    int n;
    int S = 0;
    x = Nhap_So(_tenSo_1);
    n = Nhap_So(_tenSo_2);
    printf("x: %d\nn: %d\n", x, n);
    S = Tinh_S(x, n);
    return 0;
}
