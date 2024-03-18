#include<stdio.h>

int main(){
    long int n;
    do{
        printf("nhap n:");
        scanf("%ld", &n);
        if(n < 1){
            printf("nhap lai!!\n");
        }
    }while(n < 1);
    
    int _result = 0;
    int _rem = 0;
    while(n != 0){
        _rem = n % 10;
        printf("rem %d\n", _rem);
        _result += _rem;
        n /= 10;
    }
    printf("tong cac chu so cua so nguyen duong la %d\n", _result);
    return 0;
}
