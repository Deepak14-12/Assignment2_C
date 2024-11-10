//ques7. wap to print following series......
//a+1+b+2+c+3............
//-----------------------------------------------------------

#include<stdio.h>
int main()
{
 int n,i = 1; 
 char a = 'a';
 printf("Enter length of series: ");
 scanf("%d",&n);
 
     printf("%c + %d ",a,i);
    
 for ( i = 2; i <= n; i++)
 {    
     a++;
     printf("+ %c + %d ",a,i);
    
 }
    return 0;
}