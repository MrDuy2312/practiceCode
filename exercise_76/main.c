#include<stdio.h>

int main(){
    int n;
    int p = 1;
    printf("Nhap n:");
    scanf("%d", &n);
    int max = 10000;
    for(int i = 1; p < n; i++){
        p*=3;
    }
    if(p == n){
        printf("la so nguyen 4 byte co dang 3^k\n");
    }
    else{
        printf("la so nguyen 4 byte khong co dang 3^k\n");
    }
    return 0;
}