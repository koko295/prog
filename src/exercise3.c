#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double numbers[10];

    int K = atoi(argv[1]);

    int n = 10;
    K = K % n;
    if (K < 0) {
        K += n;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%lf", &numbers[i]) != 1) {
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        int index = (i - K + n) % n;
        printf("%.3f", numbers[index]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
