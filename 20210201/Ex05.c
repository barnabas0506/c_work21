#include <stdio.h>

void swap1(int *pnum1, int *pnum2){
    int temp= pnum1;
    pnum1=pnum2;
    pnum2=temp;

}

/*void swap2(){


}
*/

int main(){
    int num1= 10, num2 =20;
    int *p1 =&num1, *p2=&num2;
    printf("*p1 = %d, *p2 = %d\n", *p1,*p2);

    swap1(p1,p2);
    printf("*p1 = %d, *p2 = %d\n", *p1,*p2);


return 0;
}