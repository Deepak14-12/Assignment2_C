// Addition and multiplication of two matrix using fuctions
#include <stdio.h>

void input(int c[3][3]);
void show(int c[3][3]);

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;
    printf("\nEnter element in 3x3 matrix A:");
    input(a); // passing base address of array //calling by referece
    printf("Enter element in 3x3 matrix B:");
    input(b);
    printf("Matrix A:\n");
    show(a);
    printf("\nMatrix B:\n");
    show(b);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nAddition of Matrix A and B:\n");
    show(c);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
        }
    }

    printf("\nMultiplication of Matrix A and B:\n");
    show(c);
    return 0;
}

void input(int c[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }
}

void show(int c[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
