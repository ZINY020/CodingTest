#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* str1, const char* str2) {
    int len = strlen(str1); // 두 문자열의 길이는 동일하다고 제한되어 있으므로 하나의 길이를 사용

    char* result = (char*)malloc(2 * len + 1); // 새로운 문자열을 저장할 메모리 할당 (길이: 2*len + 1)
    int index = 0; // 결과 문자열 인덱스

    // str1과 str2의 각 문자를 번갈아가면서 선택하여 새로운 문자열에 추가
    for (int i = 0; i < len; i++) {
        result[index++] = str1[i];
        result[index++] = str2[i];
    }
    result[index] = '\0'; // 문자열의 끝에 널 종료 문자 추가

    return result;
}

int main(void) {
    const char* str1 = "aaaaa";
    const char* str2 = "bbbbb";
    char* result = solution(str1, str2);
    printf("%s\n", result);
    free(result); // 동적 할당된 메모리 해제
    return 0;
}
