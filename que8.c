// take 10 elemengts in array, count positive and negative number in array

#include <stdio.h>

int main()
{
    int a[10], i, j, pos = 0, neg = 0;

    printf("Enter 10 numbers: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]); // taking numbers from keyboard
    }
    
    // Counting words
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0)
            neg++;
        else
            pos++;
    }

    printf("\nNegative numbers : %d", neg);
    printf("\nPositive numbers : %d", pos);
    return 0;
}
