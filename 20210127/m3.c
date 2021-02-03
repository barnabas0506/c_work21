#include <stdio.h>

void main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    int *ptr=&arr[4];
    int sum=0;

    for(i=0;i<5;i++)
        
            
            
            sum +=*(ptr--);
            printf("%d\n",sum);

            
}