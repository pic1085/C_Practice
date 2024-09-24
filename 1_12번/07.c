// 키보드로 한 문자를 입력받으면, 아스키 코드의 그 다음 문자를 출력하는 프로그램을 작성하라. 

#include <stdio.h>

int main(){
    char n;
    scanf("%c", &n);
    printf("%c", n + 1);
}