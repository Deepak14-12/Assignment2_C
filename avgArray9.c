// take 10 elemengts in array, count positive and negative number in array

#include <stdio.h>

int main()
{
    int a[10], i, sum = 0;
    float avg = 0;
    printf("Enter 10 numbers: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]); // taking numbers from keyboard
    }

    // average array
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    avg = sum / 10.0;

    printf("\nAverage of array : %f", avg);
    return 0;
}
