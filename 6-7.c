// 난생처음 C언어 프로그래밍
// Chapter 06(Section 03)

#include <stdio.h>

int main()
{
    int i = 0;
    int Sum = 0;

    while(i < 100)
    {
        Sum = Sum + (i + 1);
        i++;
    }

    printf("총합: %d", Sum);
}