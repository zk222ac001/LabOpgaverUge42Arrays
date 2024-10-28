/*
Lav et program der indl�ser nogle tal og gemmer dem i et array. Brugeren
bestemmer hvor mange tal der skal indtastes, men der er en gr�nse p� maksimalt 100 tal.
Derefter skal programmet lave f�lgende beregninger og skrive resultaterne ud:
- Summen af de indl�ste tal
- Gennemsnittet
- Finde det laveste tal
- Finde det h�jeste tal
- Unders�ge om der er dubletter, alts� tal der forekommer mere end �n gang
Programmet kan med fordel deles op i funktioner, for eksempel en funktion der indl�ser
tallene; en eller flere funktioner der laver beregningerne; og til sidst en funktion der
udskriver resultaterne.
Programmet skal give en fejlmeddelelse hvis brugeren fors�ger at indtaste mere end 100
tal.
*/

#include <stdio.h>

#define MAX_SIZE 100

void readNumbers(int arr[], int* size);
int calculateSum(int arr[], int size);
double calculateAverage(int arr[], int size);
int findLowest(int arr[], int size);
int findHighest(int arr[], int size);
int hasDuplicates(int arr[], int size);
void printResults(int sum, double average, int lowest, int highest, int duplicates);

int main() {
    int numbers[MAX_SIZE];
    int size;

    readNumbers(numbers, &size);

    if (size > MAX_SIZE) {
        printf("Fejl: Du kan ikke indtaste mere end %d tal.\n", MAX_SIZE);
        return 1;
    }

    int sum = calculateSum(numbers, size);
    double average = calculateAverage(numbers, size);
    int lowest = findLowest(numbers, size);
    int highest = findHighest(numbers, size);
    int duplicates = hasDuplicates(numbers, size);

    printResults(sum, average, lowest, highest, duplicates);

    return 0;
}

void readNumbers(int arr[], int* size) {
    printf("Hvor mange tal vil du indtaste (maks %d)? ", MAX_SIZE);
    scanf_s("%d", size);

    if (*size > MAX_SIZE) {
        return;
    }

    printf("Indtast dine tal:\n");
    for (int i = 0; i < *size; i++) {
        printf("Tal %d: ", i + 1);
        scanf_s("%d", &arr[i]);
    }
}

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double calculateAverage(int arr[], int size) {
    return (double)calculateSum(arr, size) / size;
}

int findLowest(int arr[], int size) {
    int lowest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < lowest) {
            lowest = arr[i];
        }
    }
    return lowest;
}

int findHighest(int arr[], int size) {
    int highest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }
    return highest;
}

int hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return 1;
            }
        }
    }
    return 0;
}

void printResults(int sum, double average, int lowest, int highest, int duplicates) {
    printf("\nResultater:\n");
    printf("Summen af de indl�ste tal: %d\n", sum);
    printf("Gennemsnittet: %.2f\n", average);
    printf("Laveste tal: %d\n", lowest);
    printf("H�jeste tal: %d\n", highest);
    printf("Dubletter fundet: %s\n", duplicates ? "Ja" : "Nej");
}