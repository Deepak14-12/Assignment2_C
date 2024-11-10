//ques1. wap to print following series......
//4,36,324,2916,......
//-----------------------------------------------------------

#include<stdio.h>
int main(){
int n, a;
a=4;
printf("Enter length of series: ");
scanf("%d",&n);

   printf(" %d ",a);
  
for ( int i = 1; i <= n; i++)
{     a = a * 9;
   printf(" %d ",a);
    }
    return 0;
}