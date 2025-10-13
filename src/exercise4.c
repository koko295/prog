#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double numbers[10];
    double X;
    int K;
    int n = 10;

    X = atof(argv[1]);
    K = atoi(argv[2]);

    for (int i = 0; i < n; i++) {
        if (scanf("%lf", &numbers[i]) != 1) {
            return 1;
        }
    }

    for (int i = n - 1; i > K; i--) {
        numbers[i] = numbers[i - 1];
    }

    numbers[K] = X;

    for (int i = 0; i < n; i++) {
        printf("%.3f", numbers[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
