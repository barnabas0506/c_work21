#include <stdio.h>

void doA(int a)
{
    printf("doA() start\na =%d\n",a);
    a=20;
    printf("a =%d\ndoA() end \n",a);
}

void doB(int *b)
{
    printf("b = %d\n",b);
    printf("*b = %d\n",*b);
    *b =10;
    *(b+1)=20;
    for(int i=0;i<10;i++)
    {
    printf("*(b+%d) = %d\n", i, *(b+i));
    }
}
int doC(int a)
{
    a=20;//  main의 a값과 연관없음
 return a*a;
}
void main()
{
    int a=10;
    int b[10]={1,2,3,4,5,6,7,8,9,10};
  
    doA(a);
    printf("main a = %d\n",a);
    doB(b);//doB[0]
     for(int i=0;i<10;i++)
    {
    printf("*(b+%d) = %d\n", i, *(b+i));
    }
    printf("a=%d\n",a);

    a= doC(a);
    printf("a=%d\n",a);
}