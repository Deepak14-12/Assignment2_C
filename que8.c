//ques8. wap to print following series......
//APK,BQL,CRM,DSN......
//-----------------------------------------------------------

#include<stdio.h>
int main()
{
 int n,i;
 char a='A',b='P',c='K';

 printf("Enter length of series: ");
 scanf("%d",&n);


    
 for ( int i = 1; i <= n; i++)
 {    
     printf("\t%c%c%c",a,b,c);
     a += 1;
     b += 1;
     c += 1;
    
 }
    return 0;
}