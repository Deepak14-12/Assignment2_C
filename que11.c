//Write a C  program that will produce a table of values of the equation where x varies from 1.5 to 10.0 in steps of 0.05..
// Y= e^x^2.log(1+|x|)/ √(1+x^3)+x^5

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function to calculate the value of Y based on the given equation
double calculate_y(double x) {
    double term1 = exp(x * x);                      // e^(x^2)
    double term2 = log(1 + fabs(x));                 // log(1 + |x|)
    double term3 = sqrt(1 + pow(x, 3));              // sqrt(1 + x^3)
    double term4 = pow(x, 5);                        // x^5

    return (term1 * term2) / term3 + term4;          // Combine all terms to calculate Y
}

int main() {
    double x;
    double y;
    
    // Print the header for the table
    printf("%-10s%-20s\n", "x", "Y");

    // Loop to calculate Y for x from 1.5 to 10.0 with step 0.05
    for (x = 1.5; x <= 10.0; x += 0.05) {
        y = calculate_y(x);
        printf("%-10.2f%-20.10f\n", x, y);  // Print x and Y values
    }

    return 0;
}
