// 화씨온도 (fahrenheit) 을 입력받아 섭씨온도(celsius)로 변환하는 프로그램을 작성하라. 
// 과계식은 다음과 같다. (C : 섭씨온도, F : 화씨온도)
// C = 5 * (F - 32) / 9

#include <stdio.h>

int main() {
    float F = 0;

    scanf("%f", &F);
    printf("%f", 5 * (F - 32) / 9);

}