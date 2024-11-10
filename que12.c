/*Write a program to read a positive integer number n and generate the numbers in the following way. if the entered number is 3 the output will be as follows

9410149
9410123
*/

#include <stdio.h>

int main() {
    int n;

    // Read the positive integer n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if n is a valid positive integer
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
      int k= n*n;
    // Loop to generate n numbers
    for (int i = 0; i < n; i++) {
        // Print the fixed part "94"
        printf("9410");

        // Generate the middle part: 14, 12, 10, ...
        printf("%d", 14 - 2 * i);

        // Print the last part, which is just square of n and divided by n 
        printf("%d\n", k);
        k = k/n;
    }

    return 0;
}
