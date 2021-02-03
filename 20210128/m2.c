/*
#include <stdio.h>

int Swap3(int num1, int num2, int num3);

void main()
{
    int num1=10, num2=20, num3=30;
    Swap3(num1, num2, num3); 
    printf("%d %d %d\n", num1,num2,num3);


}
 int Swap3(int num1, int num2, int num3)
 {
   int temp;
      //함수안에서만 값바뀜
   temp=num3;
   num3=num2;
   num2=num1;
   num1=temp;
  
 }  

*/

#include <stdio.h>

int Swap3(int *num1, int *num2, int *num3);

void main()
{
    int num1=10, num2=20, num3=30;
    printf("%d %d %d\n", num1,num2,num3);
    Swap3(&num1, &num2, &num3); 
    printf("%d %d %d\n", num1,num2,num3);


}
 int Swap3(int *num1, int *num2, int *num3)
 {
   int temp;
      //돌려줄때도 값이  나올려면
   temp=*num3;
   *num3=*num2;
   *num2=*num1;
   *num1=temp;
  
 }  
  
