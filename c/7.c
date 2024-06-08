/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
   int year, month;

    scanf("%d %d", &year, &month);

    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    switch (month) {
        case 2: 
            if (isLeapYear) {
                printf("29\n");
            } else {
                printf("28\n");
            }
            break;
        case 4: 
        case 6:
        case 9:
        case 11: 
            printf("30\n");
            break;
        default: 
            printf("31\n");
    }
    return 0;
}