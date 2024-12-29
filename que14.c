#include <stdio.h>

void interchangeElements(int arr[], int size) {
    if (size < 2) {
        return; // No interchange needed for arrays with less than 2 elements
    }

    int temp = arr[size - 1];
    arr[size - 1] = arr[0];
    arr[0] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    interchangeElements(arr, size);

    printf("Array after interchange: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}