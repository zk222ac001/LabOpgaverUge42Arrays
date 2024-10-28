/*
Lab 1(a)
Write a loop that adds all the elements of the array n[10] and stores the
result in total variable
*/

#include <stdio.h>

int main() {
    int n[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // Example array
    int total = 0;

    for (int i = 0; i < 10; i++) {
        total += n[i];
    }

    printf("The total sum of the array elements is: %d\n", total);
    return 0;
}