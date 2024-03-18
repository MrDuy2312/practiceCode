#include <stdio.h>

int main(){
  int exercise42_Input;

  do{
    printf("Nhap n:");
    scanf("%d", &exercise42_Input);
    if(exercise42_Input < 1){
      printf("nhap lai!!\n");
    }
  }while(exercise42_Input < 1);

  int exercise42_Result = 0;
  int exercise42_Count = 0;

  while(exercise42_Result + (exercise42_Count + 1) < exercise42_Input){
    exercise42_Count++;
    exercise42_Result += exercise42_Count; 
  }
  printf("Gia tri nguyen duong k lon nhat: %d\n", exercise42_Count);
  return 0;
}
