#include <stdio.h>
void main()
{
    int arr[3]={1,2,3};
    int *ptr = &arr[3];
    arr[0] +=5;
     printf("%d \n",arr[0]);
     printf("%d \n",ptr);
    arr[1] +=7;
     printf("%d \n",arr[0]);
    arr[2] +=9;
     printf("%d \n",arr[0]);
}