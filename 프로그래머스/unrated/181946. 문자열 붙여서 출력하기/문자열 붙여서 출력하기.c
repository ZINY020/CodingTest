#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20 // 최대 문자열 길이

int main(void) {
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];

    // 두 개의 문자열 입력 받기
    scanf("%s %s", str1, str2);

    // 두 문자열 이어붙이기
    strcat(str1, str2);

    // 결과 출력
    printf("%s\n", str1);

    return 0;
}
