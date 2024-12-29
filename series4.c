// evaluate following series
//  s= 1+2(1)+3(2+4(3)....opto n(n-1) terms
#include <stdio.h>

int main()
{
    int n , i;
    printf("enter number of terms: ");
    scanf("%d",&n);

    int sum = 1, term = 0;
    for (i = 1; i <= n; i++)
    {
        term = i * (i - 1); 
        sum = sum+term;  

    }
    printf("sum upto %d terms: %d", n, sum);
    return 0;
}