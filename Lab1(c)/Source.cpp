/*
Read the 20 elements of integer array sales[20] from the keyboard. 
Next display a bar chart for each element of this array.
*/

#include <stdio.h>

int main() {
    int sales[20];

    // Read 20 elements from the keyboard
    printf("Enter 20 sales figures:\n");
    for (int i = 0; i < 20; i++) {
        printf("sales[%d]: ", i);
        scanf_s("%d", &sales[i]);
    }

    // Display bar chart
    printf("\nSales Bar Chart:\n");
    for (int i = 0; i < 20; i++) {
        printf("sales[%d]: ", i);
        for (int j = 0; j < sales[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}