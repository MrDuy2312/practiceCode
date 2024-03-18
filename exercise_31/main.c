/*Code C kiem tra so nguyen to*/
#include<stdio.h>
#include<math.h>

int main(){
  int n; //nhap n
  do{
    printf("nhap n:");
    scanf("%d", &n);
    if(n < 2){
      printf("nhap lai vi so ko phai la so nguyen to\n");
    }
  }while(n < 2);

  int i; //nhap dem so loop
  int dem = 0;
  for(i = 2; i <= sqrt(n); i++){
    if(n%i == 0 ){
      dem++;
    }
  }

  if(dem == 0){
    printf("so la so nguyen to\n");
  }
  else{
    printf("so la so k phai so nguyen to\n");
  }
    // printf("can bac 2 la %f\n", sqrt(n));
  return 0;
}
