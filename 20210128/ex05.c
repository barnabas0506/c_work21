#include <stdio.h>

void main()
{

    char *arrp[3]={"aaa","bbb","ccc"};

    printf("arr[0] =%d\n", arrp[0]);
    printf("arr[1] =%d\n", arrp[1]);
    printf("arr[2] =%d\n", arrp[2]);
 
    
    printf("*arr[0] =%s\n", arrp[0]);  //주소에 가서 값
    printf("*arr[1] =%s\n", arrp[1]);
    printf("*arr[2] =%s\n", arrp[2]);
}