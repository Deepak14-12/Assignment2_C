//ques1. wap to print following series......
//Z,X,S,I,R,R,G,I.
//-----------------------------------------------------------

#include<stdio.h>

int main() {
    char ch = 'Z';
    int diff = 2;

    for (int i = 1; i < 8; i++) {
        printf("%c ", ch);
        ch -= diff;
        diff += 3;
    }

    //printf("\n");
    return 0;
}