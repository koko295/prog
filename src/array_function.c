#include "../include/array_function.h"

void join_int_arrays(const int* src1, size_t size_src1, const int* src2, size_t size_src2, int* dest) {
    for (size_t i = 0; i < size_src1; ++i) {
        dest[i] = src1[i];
    }
    for (size_t j = 0; j < size_src2; ++j) {
        dest[size_src1 + j] = src2[j];
    }
}

void join_and_sort_int_arrays(const int* src1, size_t size_src1, const int* src2, size_t size_src2, int* dest) {
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;

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

void get_min_and_max_from_int_array(const int* src, size_t size, int* min, int* max) {
    int cur_min = src[0];
    int cur_max = src[0];

    for (size_t i = 1; i < size; ++i) {
        if (src[i] < cur_min) cur_min = src[i];
        if (src[i] > cur_max) cur_max = src[i];
    }

    *min = cur_min;
    *max = cur_max;
}