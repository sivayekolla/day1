#include <stdio.h>

int main() {
    int s1 = 80, s2 = 90, s3 = 70;
    int total = s1 + s2 + s3;
    float avg = total / 3.0;
    float percent = (total / 300.0) * 100;
    printf("%d %.2f %.2f\n", total, avg, percent);
    return 0;
}
