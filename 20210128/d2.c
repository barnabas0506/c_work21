/*


12% 2 = 0
6% 2 =0

3%2 =1

*/


#include <stdio.h>


int  main()
{

int n;
//int s; //몫
int r; //나머지
int c=0; //나눈 횟수; 배열
int arr[100];

printf("input\n");
scanf("%d",&n);

   while(n >0)
    {
        r=n%2;
        printf("r =%d\n", r);

        n =n/2;

        arr[c] =r; 
       // n=s;
        c++;
    }

while(c>0)
printf("%d",arr[c--]);

return 0;
}