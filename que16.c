//Write a c program that accept any two numbers until 5 times. 
//If the first number is smaller than the second then display the sum of their squares otherwise sum of their cubes.

#include <stdio.h>

int main() {
    int num1, num2, i = 1;

    while (i <= 5) {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        if (num1 < num2) {
            printf("Sum of squares: %d\n", num1 * num1 + num2 * num2);
        } else {
            printf("Sum of cubes: %d\n", num1 * num1 * num1 + num2 * num2 * num2);
        }

        i++;
    }

    return 0;
}