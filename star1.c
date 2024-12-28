/*
   *
  * *
 * * *
  * *
   *
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j, k, n ;

    printf("Enter lines: ");
    scanf("%d",&n);
    
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            if (k % 2 == 0)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            if (k % 2 == 0)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    
    return 0;
}


