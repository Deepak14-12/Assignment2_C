#include <stdio.h>

int main() {
    int n, i, count_above = 0, count_below = 0;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    i = 0;
    while (i < n) {
        sum += arr[i];
        i++;
    }

    average = sum / n;

    i = 0;
    while (i < n) {
        if (arr[i] > average) {
            count_above++;
        } else if (arr[i] < average) {
            count_below++;
        }
        i++;
    }

    printf("Average: %.2f\n", average);
    printf("Number of elements above average: %d\n", count_above);
    printf("Number of elements below average: %d\n", count_below);

    return 0;
}