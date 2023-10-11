#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int n) {
    int str_len = strlen(my_string);
    int return_len = n > str_len ? str_len : n;
    char* result = (char*)malloc(return_len + 1);
    strncpy(result, my_string + str_len - return_len, return_len);
    result[return_len] = '\0';
    return result;
}
