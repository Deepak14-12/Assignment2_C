// passing row in function of 2-D array

#include <stdio.h>
void display(int c[]);
int main()
{
    int a[3][3], i, j;
    printf("\nenter  elements in 3x3 matrix:  ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    display(a[1]);
}

void display(int c[])
{
    printf(" passed row of matrix: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", c[i]);
    }
}
