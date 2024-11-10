
//write a program to find total number of votes in favour of person 'A' and 'B'.assume 15 votes will be casting their votes to these persons.
//Count the number of votes gained by 'A' and 'B' .user can enter hir/her choices by pressing only 'A' and 'B'.


#include <stdio.h>

int main() { 
    int votesA = 0, votesB = 0;
    char vote;

    printf("Enter 15 votes (A or B):\n");

    for (int i = 0; i < 15; i++) {
        scanf(" %c", &vote); // Note the space before %c to consume extra whitespace

        if (vote == 'A') {
            votesA++;
        } else if (vote == 'B') {
            votesB++;
        } else {
            printf("Invalid vote. Please enter 'A' or 'B'.\n");
            i--; // Decrement i to re-prompt the user for the same vote
        }
    }

    printf("\nTotal votes for A: %d\n", votesA);
    printf("Total votes for B: %d\n", votesB);

    return 0;
}