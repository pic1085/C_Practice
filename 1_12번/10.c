// 아래의 다항식에서 x의 값을 사용자에게 입력받아 y의 값을 계산하여 화면에 출력하는 프로그램을 작성하라.
// y = x^3 + 20x^2 + 100x - 5

#include <stdio.h>

int main(){
    int x;
    int y = 0;
    scanf("%d", &x);

    y = x * x * x + 20 * x * x + 100 * x - 5;
    printf("%d", y);
}