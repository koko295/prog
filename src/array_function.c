#include <stddef.h>
#include "array_function.h"

// 1. Объединение двух массивов в порядке src1 + src2
void join_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    for (size_t i = 0; i < size_src1; ++i) {
        dest[i] = src1[i];
    }
    for (size_t j = 0; j < size_src2; ++j) {
        dest[size_src1 + j] = src2[j];
    }
}

// 2. Слияние двух ОТСОРТИРОВАННЫХ массивов в один ОТСОРТИРОВАННЫЙ
void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    size_t i = 0; // индекс в src1
    size_t j = 0; // индекс в src2
    size_t k = 0; // индекс в dest

    while (i < size_src1 && j < size_src2) {
        if (src1[i] <= src2[j]) {
            dest[k++] = src1[i++];
        } else {
            dest[k++] = src2[j++];
        }
    }

    while (i < size_src1) dest[k++] = src1[i++];
    while (j < size_src2) dest[k++] = src2[j++];
}

// 3. Нахождение минимального и максимального элемента массива
void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    if (size == 0) return; // защита от пустого массива

    int cur_min = src[0];
    int cur_max = src[0];

    for (size_t i = 1; i < size; ++i) {
        if (src[i] < cur_min) cur_min = src[i];
        if (src[i] > cur_max) cur_max = src[i];
    }

    *min = cur_min;
    *max = cur_max;
}