#include <stdio.h>

float sum(float a, float b) {
    float sum = a + b;
    return sum;
}

float difference(float a, float b) {
    float diff = a - b;
    return diff;
}

int main() {
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float sum_ab = sum(a, b);
    float diff_ab = difference(a, b);
    float sum_cd = sum(c, d);
    float diff_cd = difference(c, d);

    printf("%.0f %.0f\n", sum_ab, diff_ab);
    printf("%.1f %.1f\n", sum_cd, diff_cd);
}