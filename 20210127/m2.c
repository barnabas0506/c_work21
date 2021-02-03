#include <stdio.h>

void main()
{
    int arr[5]={1,2,3,4,5};
    int result=0;

    int *ptr=arr;

    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
        {
            printf(" value is %d\n",ptr[i]);
            printf(" value is %d\n",*(ptr+i)+2);  //반환 되는 주소값에 2더하기
            printf("array %d value is %d\n", i, arr[i]);
        }    
}