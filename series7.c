// print following series
//  s= 1-1/3+1/5-1/7.....opto n terms

#include <stdio.h>

int main()
{
    int a = 1, b = 1, i, n = 5;
    printf("%d", a);
    for (i = 1; i <= n - 1; i++)
    {
        b = b + 2;
        printf(", %d/%d", a, b);
    }
    return 0;
}