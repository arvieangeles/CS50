#include <stdio.h>
#include <cs50.h>
#include <math.h>


int
main (void)
{
int a, b, i;
float sum=0, final;
    do
    {
    printf("Days in month: ");
    a = GetInt ();
    }
    while (a>31 || a<28);
    
    printf("Pennies on first day: ");
    b = GetInt ();
   
    for (i=0;i<a;i++)
    {
    if (b==1)
    sum = (sum + pow(2,i));
    else
    sum = (sum + pow(2,(i+1)));
    }
    
    final = sum*0.01;
    printf("$%0.2f\n", final);
   
}
