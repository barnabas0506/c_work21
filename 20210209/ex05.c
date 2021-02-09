#include <stdio.h>

void main(){
    char perId[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력: ",stdout);
    fgets(perId,sizeof(perId),stdin);
    
    // fflush(stdin);// 옛날에 사용 입력 버퍼 지우기

    while(getchar() != '\n');

    fputs("이름 입력: ",stdout);
    fgets(name,sizeof(name),stdin);

    fget

    printf("주민번호 %s\n", perId);
    printf("이름 %s\n", name);

}