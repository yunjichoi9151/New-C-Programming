// 난생처음 C언어 프로그래밍
// Chapter 05(Section 03)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int age;
    printf("나이를 입력하세요!\r\n");
    scanf("%d", &age);

    if(age >= 20)
        printf("성인입니다.");
    else if(age >= 12)
        printf("청소년입니다.");
    else
        printf("아동입니다.");
}