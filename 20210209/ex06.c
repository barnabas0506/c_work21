#include <stdio.h>
#include <stdlib.h>

void main(){
    char a[10]="1234";

    int b=atoi(a);  // int로 바꿈
    double c = atof(a);  //더블로 바꿈

    printf("b = %d\n",b);
    printf("c = %f\n",c);

}