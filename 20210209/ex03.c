#include <stdio.h>

void main(){
    int ch;
    while(1){
        ch =getchar();   //공백도 인식
        if(ch==EOF)
            break;
            putchar(ch);
    }
}