// 키보드로부터 정수 n을 입력받아서 0부터 n사이의 홀수의 합을 구하여라.

#include <stdio.h>

int main(){
    int n = 0;
    int sum = 0;
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    printf("%d", sum);
}