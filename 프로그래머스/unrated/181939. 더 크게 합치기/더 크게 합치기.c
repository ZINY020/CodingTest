#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int concatenate(int a, int b) {
    int temp = b;
    int length = 1;
    
    // b의 자릿수를 계산
    while (temp > 0) {
        temp /= 10;
        length *= 10;
    }
    
    // a와 b를 붙이는 연산
    int result = a * length + b;
    return result;
}

int solution(int a, int b) {
    int result1 = concatenate(a, b);  // a ⊕ b
    int result2 = concatenate(b, a);  // b ⊕ a
    
    if (result1 > result2) {
        return result1;
    } else {
        return result2;
    }
}

int main() {
    int a = 9;
    int b = 91;
    int result = solution(a, b);
    
    printf("Result: %d\n", result);
    return 0;
}
