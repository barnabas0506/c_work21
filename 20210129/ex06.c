#include <stdio.h>

void main()
{
    int arr[3][3];
    int i =0, j=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("숫자 입력 : = \n");
            scanf("%d", &arr[i][j]);
        }      
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("숫자 출력 : %d\n",arr[i][j]);
        }      
    }
}