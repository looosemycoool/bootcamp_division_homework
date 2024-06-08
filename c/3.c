/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
   int hour;

    scanf("%d", &hour);
    if (hour < 12) {
        printf("AM\n");
    } else {
        printf("PM\n");
    }

    return 0;
}