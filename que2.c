//ques2. wap to print following series......
//10,22,46,94,190,......
//-----------------------------------------------------------

#include<stdio.h>
int main(){
int n, a;
a=10;
printf("Enter length of series: ");
scanf("%d",&n);

   printf(" %d ",a);
  
for ( int i = 1; i <= n; i++)
{     a = (a * 2) + 2;
   printf(", %d ",a);
    }
    return 0;
}