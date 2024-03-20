/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int i;

    scanf("%d", &i);

    if(i>=90 && i<=100){
        printf("A");
    }

    else if(i<90 && i>=80){
        printf("B");
    }

    else if(i<80 && i>=70){
        printf("C");
    }

    else if(i<70 && i>=60){
        printf("D");
    }
    else{
        printf("F");
    }

    return 0;
}