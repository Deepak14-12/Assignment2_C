// evaluate following series
//  s= 1-1/3+1/5-1/7.....opto n terms

#include <stdio.h>

int main()
{
    int n = 5,i;
    double sum = 0.0, term = 0.0;
    for (i = 0; i < n; i++)
    {
        term = 1.0 / (2 * i + 1);
        if (i % 2 == 0)
            sum += term;
        else
            sum -= term;

        // printf("term %d: %.4f\n", i+1, term);
    }
    printf("sum upto %d terms: %.4f\n", n, sum);
    return 0;
}