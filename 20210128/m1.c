#include <stdio.h>

int SquareByValue(int n1);
int SquareByReference(int n2);

void main()
{
    int num=10;
    int * pnum = &num;
    printf("pnum add value %d\n",pnum);
    printf("%d\n", SquareByValue(num));
    printf("%d\n", SquareByReference(*pnum));


}

int SquareByValue(int n1)
    {
    int result =0;
    printf("n1 value %d",n1);
    result =n1*n1;    
    return result;
    }


int SquareByReference(int n2)
    {
    int result =0;
    result =n2*n2;    
    return result;
    }    
