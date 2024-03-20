/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int num, re = 0; 

    scanf("%d", &num);
    
    int len= 3;
    while(num != 0) {
        int ten = 1;
        for(int i = 0; i < len-1 ; i++){
            ten *= 10;
        }
        re += ten * (num % 10);
        num /= 10;
        len--;
    }

    printf("%d", re);

    return 0;
}