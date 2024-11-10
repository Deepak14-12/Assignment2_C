//write a program to add numbers until user enters zero.
//-----------------------------------------------------------
#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    // Ask the user to input numbers
    printf("Enter numbers to add. Enter 0 to stop.\n");

    // Continuously read numbers and add them
    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        // Add the entered number to the sum, unless it is 0
        if (number != 0) {
            sum += number;
        }
    } while (number != 0); // Continue until user enters 0

    // Display the total sum
    printf("The total sum is: %d\n", sum);

    return 0;
}
