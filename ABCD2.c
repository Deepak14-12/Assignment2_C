/*
 A B C D E
  A B C D
   A B C
    A B
     A
     */
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j, k, n = 5;
    char c;
    //char r = 97;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (c = 'A'; c <= 'E' - i; c++) {
            printf("%c ", c);
        }
        printf("\n");
    }
    // char ch;
    // printf("Enter a character: ");
    // scanf(" %c", &ch);
    // printf("The ASCII value of %c is %d\n", ch, ch);

    // printf("%c",r);
    return 0;
}
   
