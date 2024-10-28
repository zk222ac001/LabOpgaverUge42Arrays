/*
Find the largest and smallest element of sales[20] array. 
(Initialize first sales array with some values or read out from keyboard as in c) 
task.
*/

#include <stdio.h>

int main() {
    int sales[20];
    int largest, smallest;

    // Read 20 elements from the keyboard
    printf("Enter 20 sales figures:\n");
    for (int i = 0; i < 20; i++) {
        printf("sales[%d]: ", i);
        scanf_s("%d", &sales[i]);
    }

    // Initialize largest and smallest with the first element
    largest = smallest = sales[0];

    // Find the largest and smallest elements
    for (int i = 1; i < 20; i++) {
        if (sales[i] > largest) {
            largest = sales[i];
        }
        if (sales[i] < smallest) {
            smallest = sales[i];
        }
    }

    // Display the results
    printf("\nLargest sales figure: %d\n", largest);
    printf("Smallest sales figure: %d\n", smallest);

    return 0;
}