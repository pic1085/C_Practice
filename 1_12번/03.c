// 'a' 부터 'h'까지 각 문자와 문자의 아스키 코드를 출력하는 프로그램을 for문을 사용하여 작성하라.

#include <stdio.h>

int main(){
    for(int i = 0; i<8 ; i++){
        printf("%d\n", 'a'+i);
    }
}