#include <stdio.h>

int main() {
    double d1[100], d2[100], sum[100], difference[100];

    // Example initialization of arrays d1 and d2
    for (int i = 0; i < 100; i++) {
        d1[i] = (i + 1.0) * 2; // Example values for d1
        d2[i] = (i + 1.0); // Example values for d2
    }

    // Calculate sum and difference
    for (int i = 0; i < 100; i++) {
        sum[i] = d1[i] + d2[i];
        difference[i] = d1[i] - d2[i];
    }

    // Print the results
    for (int i = 0; i < 100; i++) {
        printf("sum[%d] = %.2f, difference[%d] = %.2f\n", i, sum[i], i, difference[i]);
    }

    return 0;
}