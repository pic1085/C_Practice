//원의 반지름을 입력받아, 면적을 계산하여 출력하는 프로그램을 작성하라. 

#include <stdio.h>

int main(){
    int r;
    scanf("%d", &r);

    float avg = 0;
    avg = r*r*3.14;
    printf("%.3f\n", avg);
}