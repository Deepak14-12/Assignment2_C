//write a program to display all ASCII numbers and their equivalent characters numbers and symbols. use do while loop. 
//User should be prompt every time to press 'Y' or 'N' .if the user press 'Y' display the next alphabet otherwise terminate the program.

#include <stdio.h>

int main() {
    char choice;
    int ascii_num = 0;

    do {
        printf("ASCII value: %d, Character: %c\n", ascii_num, ascii_num);
        ascii_num++;

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    return 0;
}