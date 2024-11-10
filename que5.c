//ques5. wap to print following series......
//7,10,8,11,9,12......
//-----------------------------------------------------------

#include<stdio.h>
int main()
{
 int n, a,k;
 a=7, k=2; 
 printf("Enter length of series: ");
 scanf("%d",&n);

   
  printf("%d",a);
    
 for ( int i = 1; i <= n; i++)
 {    
     a = (a + 3);
     printf(", %d",a);
     a -= k;
     printf(", %d",a);
    
 }
    return 0;
}