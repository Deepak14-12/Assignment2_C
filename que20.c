// Display diagonal elements of array


#include<stdio.h>

int main(){
int a[3][3] ,i,j;
printf("\nenter  elements in 3x3 matrix:  ");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
}
printf("\nentered elements in 3x3 matrix Are: \n");
for (i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

printf("\nDiagonal elements in 3x3 matrix Are: ");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        if (i == j)
        {
            printf("%d ",a[i][j]);
        }
           }
    
}

}