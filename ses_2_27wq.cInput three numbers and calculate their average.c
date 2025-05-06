#include <stdio.h>

int main() {
    int m1, m2, m3;
    scanf("%d%d%d", &m1, &m2, &m3);
    float avg = (m1 + m2 + m3) / 3.0;
    printf("%.2f\n", avg);
    return 0;
}

