#include <stdio.h>

int main(void) {
    int rowsA = 10, colsA = 3;
    int rowsB = 3, colsB = 10;
    double A[10][3];
    double B[3][10];
    double C[10][10];

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            if (scanf("%lf", &A[i][j]) != 1) {
                return 1;
            }
        }
    }

    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            if (scanf("%lf", &B[i][j]) != 1) {
                return 1;
            }
        }
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            double sum = 0.0;
            for (int k = 0; k < colsA; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%.3f", C[i][j]);
            if (!(i == rowsA - 1 && j == colsB - 1)) {
                printf(" ");
            }
        }
    }
    printf("\n");

    return 0;
}
