#include <stdio.h>

void main(){
    char peId[7];
    char name[10];

    fputs("주민버호 앞 6자리 입력: ",stdout);
    fgets(perId,sizeof(perId),stdin);
    
    fputs("이름 입력: ",stdout);
    fgets(name,sizeof(name),stdin);

    printf("주민번호 %s\n", peId);
    printf("이름 %s\n", name);

}