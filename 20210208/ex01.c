#include <stdio.h>



void main(){
    const n =7;
    int arr[5];
    int i=0;
    int j=1;

    for(i=0;i<5;i++){
        printf("숫자입력: \n");
        scanf("%d",&arr[i]);
    }


    printf("\n입력한 숫자 확인\n");
    for(i=0; i<5;i++){
        printf("%d",arr[i]);
    }    
    printf("\n");
}