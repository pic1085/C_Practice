// 키보드로부터 정수를 입력받아 평균을 계산하는 프로그램을 while 문을 이용하여 작성하라.
// 0이 입력되면 프로그램은 종료. 
// 평균값을 계산하려면 프로그램 내에서 입력되는 숫자의 개수를 헤아려야 한다.
// - 출력 형식 - 
// Enter the number : 2
// Enter the number : 6
// Enter the number : 0
// Average of 2 numbers : 4

#include <stdio.h>

int main(){
    int sum = 0;
    int count = 0;
    
    while(1){
        int num;
        printf("Enter the number : ");
        scanf("%d", &num);
        
        if(num == 0) break;
        else {
            count++;
            sum += num;
        }
    }
    printf("Average of 2 numbers : %d", sum / count); 
}