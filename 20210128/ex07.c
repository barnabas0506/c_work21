#include <stdio.h>

void doA(int *p)
{
    printf("\n");
    printf("*p =%d\n", *p);
    printf("\n");
    *p=20;

}


void main()
{
    int arr[3] ={1,2,3};
    int i = 0;
    for(; i<3;i++){
        printf("arr[%d] = %d\n", i , arr[i]);

    }
    doA(arr);  //주소값이 넘어감  doA(&arr[0]);  call by reterence

    for(i=0;i<3;i++)
    {
        printf("arr[%d] =%d\n", i, arr[i]);
    }   
}
