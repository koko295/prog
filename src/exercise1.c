#include <stdio.h>
int main(void) {
    double numbers[10];
    double sum = 0.0;

    for (int i = 0; i < 10; i++){
        if (scanf("%lf", &numbers[i]) != 1) {
            return 1;
        }
        sum += numbers[i];
    }

    double srdarif = sum / 10.0;
    printf("%.2f\n", srdarif);

    return 0;
}
