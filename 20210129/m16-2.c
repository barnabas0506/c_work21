#include <stdio.h>

int main(void)
{
    int i,j;
    int a[2][4]={{1,2,3,4},{5,6,7,8}};
    int b[4][2];
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
            b[i][j]= a[j][i];
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        printf("%d\n",a[i][j]);    
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        printf("%d\n",b[i][j]);    
    }


    return 0;
}