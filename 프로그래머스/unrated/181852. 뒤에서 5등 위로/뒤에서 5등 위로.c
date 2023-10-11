#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* solution(int num_list[], size_t num_list_len) {
    int sorted_list[num_list_len];
    for (size_t i = 0; i < num_list_len; i++) {
        sorted_list[i] = num_list[i];
    }

    qsort(sorted_list, num_list_len, sizeof(int), compare);

    int* result = (int*)malloc(sizeof(int) * (num_list_len - 5));

    for (size_t i = 5; i < num_list_len; i++) {
        result[i - 5] = sorted_list[i];
    }

    return result;
}
