//
// calculate y power x where x and y pass as an argument to a function

#include <stdio.h>

int calculate(int y, int x)
{int power = 0, i;
   for ( i = 1; i <= x; i++)
   {
     power = y*i;
   }
   return power;   
}

int main()
{
    int y, x, power;
    printf("enter values of x and y: ");
    scanf("%d%d", &x, &y);
    power = calculate(y, x);
    printf("%d power %d : %d",y,x,power);
    return 0;
}