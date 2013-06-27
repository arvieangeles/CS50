#include <stdio.h>
#include <cs50.h>
#include <math.h>


int
main (void)
{
long double sum=0,final,b,a,i,x=0;
    do
    {
    printf("Days in month: ");
    a = GetDouble ();
    }
    while (a>31 || a<28);
    
    do
    {
    printf("Pennies on first day: ");
    b = GetDouble ();
    }
    while (b<1);  
   
    for (i=0;i<a;i++)
    {
    x = b * pow(2,(i));
    sum = (sum + x);
    }
    
    final = sum*0.01;
    printf("$%0.2Lf\n", final);
   
}
