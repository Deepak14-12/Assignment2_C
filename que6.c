#include <stdio.h>
#include <math.h>
// simple interest
double f1(double p, double r, double t)
{
    return ((p * r * t) / 100.0);
}

// compound interest  // A = P(1+r/n)**(nt) //A = p+si
double f2(double p, double r, double t, double n)
{
    double a = p * pow(((1.0 + r / n)), (n * t));
    double ci = a - p; 
    return ci;
}
// difference of both interest for same values
int f3(double compound_interest , double simple_interest)
{  
    return ( compound_interest - simple_interest );
}
int main()
{
    double principal_amount, rate, time,n;
    double compound_interest, simple_interest, difference;

    printf("enter values: ");
    printf("\nprincipal_amount: ");
    scanf("%lf", &principal_amount);
    printf("rate of interest: ");
    scanf("%lf", &rate);
    printf("time in years: ");
    scanf("%lf", &time);
    printf("number of times interest compounded per year: ");
    scanf("%lf", &n);
    //printf("\n%.2f %.2f %.2f ", principal_amount, rate, time);
    
    simple_interest = f1(principal_amount, rate, time);
    printf("\nSimple Interest: %.2f", simple_interest);

    compound_interest = f2(principal_amount, rate, time, n);
    printf("\nCompound Interest: %lf", compound_interest);
    
    difference = f3(compound_interest, simple_interest);
    printf("\nDifference In Interest: %lf", difference);
    return 0;
}