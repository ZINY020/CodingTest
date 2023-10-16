#include <stdio.h>
#include <string.h>

int solution(int n, const char* control) {
    int len = strlen(control); // control 문자열의 길이를 구합니다.

    for (int i = 0; i < len; i++) {
        char command = control[i]; // control 문자열에서 한 글자씩 읽습니다.

        // 각각의 명령에 따라 n을 조작합니다.
        switch (command) {
            case 'w':
                n += 1;
                break;
            case 's':
                n -= 1;
                break;
            case 'd':
                n += 10;
                break;
            case 'a':
                n -= 10;
                break;
            default:
                // 잘못된 명령이면 아무 작업도 하지 않습니다.
                break;
        }
    }

    return n; // 최종 n의 값을 반환합니다.
}

int main() {
    int n;
    char control[100001];
    scanf("%d %s", &n, control); // n과 control 문자열을 입력받음

    int result = solution(n, control); // solution 함수를 호출하여 결과를 계산
    printf("%d\n", result); // 결과 출력

    return 0;
}
