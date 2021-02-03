//길이가 5인 int형 배열 arr을 선언하고 이를 1,2,3,4,5로 초기화한 다음, 이 배열의 첫번째
#include <stdio.h>

void main()
{
    int arr[5]={1,2,3,4,5};

    //int *ptr=arr; //배열0번째 주소가리킴
    int *ptr;
    ptr=arr;

    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
        {
            
            *ptr +=2; //ptr[i]+=2; / *(ptr+i)+=2;
            printf("%d\n ", ptr);
            printf("array %d value is %d\n", i, ptr[i]);
            printf("array %d value is %d  %d\n", i, *(ptr+i));
            printf("array %d value is %d\n", i, arr[i]);
            ptr++;
        }    
}
/*
#include <stdio.h>

void main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int i;

	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		*ptr += 2;
		ptr++;
		printf("%d ", arr[i]);
	}
}
*/