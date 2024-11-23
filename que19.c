// Addition and multiplication of two matrix using fuctions
#include <stdio.h>

void input(int c[4][4]);
void show(int c[4][4]);

int main()
{
    int a[4][4], b[4][4], c[4][4];
    int i,j;
    printf("\nEnter element in matrix A:");
    input(a); // passing base address of array //calling by referece
    printf("Enter in element in matrix B:");
    input(b);
    printf("Matrix A:");
    show(a);
    printf("\nMatrix B:");
    show(b);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
        }
    }

    printf("\nAddition of Matrix A and B: ");
    show(c);

    return 0;
}

void input(int c[4][4])
{
    int i, j;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
           scanf("%d", &c[i][j]);
        }
        
    }
    
}

void show(int c[4][4])
{
        int i, j;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
           printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
