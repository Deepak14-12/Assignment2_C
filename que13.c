//write a c program enter a integer number and find the largest and smallest digit of the number

#include <stdio.h>

int main() {
    int num, digit, largest, smallest;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    largest = smallest = num % 10; // Initialize with the last digit

    num /= 10; // Remove the last digit

    while (num > 0) {
        digit = num % 10;

        largest = (digit > largest) ? digit : largest;
        smallest = (digit < smallest) ? digit : smallest;

        num /= 10;
    }

    printf("Largest digit: %d\n", largest);
    printf("Smallest digit: %d\n", smallest);

    return 0;
}