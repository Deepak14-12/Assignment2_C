//ques9. write a C program display a sum of following series......
//1+1/2+1/3+.......+1/n
//-----------------------------------------------------------

#include<stdio.h>
int main()
{
 int n, i;
 double sum = 0.0;
 printf("Enter number of terms  of the series: ");
 scanf("%d",&n);
    
 for ( i = 1; i <= n; i++)
 {    
     sum += 1.0/i;
    
 }
     printf("Sum of the series 1 + 1/2 + 1/3 + ... + 1/%d is: %.6f\n", n, sum);
    return 0;
}