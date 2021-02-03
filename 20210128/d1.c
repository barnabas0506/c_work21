#include <stdio.h>

void OddPrn(int* ptr);
void EvenPrn(int* ptr);


int main(void)
{
    int arr[10];
    int *ptr=arr;
    printf("정수입력interger ten number input\n");
    
    for(int i=0; i<10;i++)
    {
       scanf("%d",&arr[i]);
       printf("array [%d] is value %d ",i, arr[i]);
    }
      printf("\n");
      OddPrn(arr);
      printf("\n");
      EvenPrn(ptr);
  return 0;
} 

void OddPrn(int *ptr) //
{
    for(int i=0;i<10;i++)
    {
        if(ptr[i]%2 !=0){
        
            printf("Odd print : %d\n",ptr[i]);
        }   
    }
}

void EvenPrn(int *ptr) //
{
    for(int i=0;i<10;i++)
    {
        if(ptr[i]%2 ==0){
        
            printf("Even print : %d\n",ptr[i]);
        }   
    }
}


// #include <stdio.h>

// void NumH(int * ptr);
// void NumJ(int * ptr);

// int main(void)
// {
//    int num[10] = { 0 };
//    int i = 0;

//    for ( i = 0; i < 10; i++)
//    {
//       printf_s("%d번째 정수 입력 : ",i+1);
//       scanf_s("%d", &num[i],sizeof(num)); //scanf_s 이기 때문에 배열의 크기까지 지정.
//    }
//    NumH(num);
//    NumJ(num);

//    return 0;
// }
// //홀수 구별하는 함수
// void NumH(int * ptr)
// {
//    int i = 0;
//    printf_s("\n");
//    printf_s("홀수 출력 : ");
//    for ( i = 0; i < 10; i++)
//    {
//       if (ptr[i] % 2 != 0) 나머지값이 0이 아니면 홀수
//       {
//          printf_s("%d ", ptr[i]);
//       }
//    }
// }
// //짝수 구별하는 함수
// void NumJ(int * ptr)
// {
//    int i = 0;
//    printf_s("\n");
//    printf_s("짝수 출력 : ");
//    for (i = 0; i < 10; i++)
//    {
//       if (ptr[i] % 2 == 0) //나머지값이 0이면 짝수
//       {
//          printf_s("%d ", ptr[i]);
//       }
//    }
//    printf_s("\n");
// }


// 출처: https://soulangel.tistory.com/532 [SA_BLOG]