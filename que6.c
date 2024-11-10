//ques6. wap to print following series......
//BAZ,DBY,FCX......
//-----------------------------------------------------------

#include<stdio.h>
int main()
{
 int n,i;
 char a='B',b='A',c='Z';

 printf("Enter length of series: ");
 scanf("%d",&n);


    
 for ( int i = 1; i <= n; i++)
 {    
     printf("\t%c%c%c",a,b,c);
     a += 2;
     b += 1;
     c -= 1;
    
 }
    return 0;
}