// 난생처음 C언어 프로그래밍
// Chapter 13(Section 03)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE* f = fopen("D:\\TestFile.txt", "wb+");

    if(f)
    {
        fputc('A', f);

        fseek(f, 0, SEEK_SET);
        int c = fgetc(f);
        printf("read: %c", c);

        fclose(f);
    }
    else
        printf("Error: %d, %s", errno, strerror(errno));
}