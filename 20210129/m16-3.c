#include <stdio.h>

int main(void)
{
    int i,j;
    int scr[5][5];

    printf("4명의 4과목점수를 차례대로 입력해주세요\n");
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&scr[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%3d",scr[i][j]);  // 입력값 출력
        }
        printf("\n");
    }

    for(i=0;i<4;i++)
    {
        
        for(j=0;j<4;j++)
        {
            scr[i][4] +=scr[i][j];  // 학생별 총점
        }
    }

    for(i=0;i<5;i++)
    {  
    
        for(j=0;j<4;j++)
        {
            scr[4][i] +=scr[j][i];  // 과목별 총점
        }
    }

for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%3d",scr[i][j]);
        }
        printf("\n");
    }


}