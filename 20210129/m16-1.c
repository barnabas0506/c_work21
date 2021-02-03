#include <stdio.h>

int main(void)
{
    int i,j;
    int arr[3][9];
    for(i=0;i<3;i++)
    {
        for(j=0;j<9;j++)
        {
                arr[i][j]=(i+2)*(j+1);   // 포문그대로 계산식만 고치기
        }
    }
    
    printf("    1열 2열 3열 4열 5열 6열 7열 8열 9열\n");
    for(i=0;i<3;i++)
    {
        printf("%d 행",i+1);
        for(j=0;j<9;j++)
        {    printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}