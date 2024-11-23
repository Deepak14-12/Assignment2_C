// find min and max element in array using fuction
#include <stdio.h>
int min(int c[]);
int max(int c[]);
int main()
{
    int a[5], i, m = 0;
    printf("enter 5 elements in array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nelements in array are:");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    m = min(a); //passing base address of array
    printf("\nminimum element : %d", m);
    m = max(a);
    printf("\nmaximum element : %d", m);
    return 0;
}

int min(int c[])
{
    int i, k;
    k = c[0];
    for (i = 0; i < 5; i++)
    {
        if (k > c[i])
        {
            k = c[i];
        }
    }
    return k;  //returning values to fuction
}

int max(int c[])
{
    int i, k;
    k = c[0];
    for (i = 0; i < 5; i++)
    {
        if (k < c[i])
        {
            k = c[i];
        }
    }
    return k; //returning values
}
