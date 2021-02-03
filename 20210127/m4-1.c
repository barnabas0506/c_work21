#include <stdio.h>

void main()
{
    int arr[6]={1,2,3,4,5,6};
    int *ptr = arr;
    for(int i=1;i<6;i++)
    {
        arr[i]=ptr[6-i];    // 5번째 6번째 그대로
        printf("%d ",arr[i]);
    }
}