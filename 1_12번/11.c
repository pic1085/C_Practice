// 1인치는 2.54cm이다. 인치를 입력하면, cm로 변환하는 프로그램을 작성하라.

#include <stdio.h>

int main() {
    float inch = 2.54;
    int x;
    scanf("%d", &x);
    printf("%f", inch * x);
}