#include <stdio.h>
//hay dem so luong chu so lon nhat cua so nguyen duong
int main(){
    int n;
    printf("nhap n:");
    scanf("%d", &n);

    int _digit;
    int _digit_max = -1;
    int _count;

    while(n != 0){
        _digit = n % 10;
        if(_digit > _digit_max){
            _digit_max = _digit;
            _count = 1;
        }
        else if(_digit == _digit_max){
            _count++;
        }
        n = n / 10;
    }
    printf("%d chu so lon nhat cua so nguyen duong\n", _count);
    return 0;
}