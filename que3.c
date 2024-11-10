//ques1. wap to print following series......
//2,9,39,161,651,2613,......
//-----------------------------------------------------------

#include<stdio.h>
int main(){
int n, a, k =1;
a = 2;
printf("Enter length of series: ");
scanf("%d",&n);

   printf(" %d ",a);
  
for ( int i = 1; i <= n; i++)
{     a = a * 4 + k;
   printf(" ,%d ",a);
   k += 2;
    }

    return 0;
}