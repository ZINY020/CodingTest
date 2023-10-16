#include <stdio.h>

int solution(int num, int n) {
    // num을 n으로 나눴을 때 나머지가 0이면 num은 n의 배수입니다.
    if (num % n == 0) {
        return 1; // 1을 반환
    } else {
        return 0; // 0을 반환
    }
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n); // 사용자로부터 num과 n을 입력받음

    int result = solution(num, n); // solution 함수를 호출하여 결과를 계산
    printf("%d\n", result); // 결과 출력

    return 0;
}
