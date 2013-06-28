#include <stdio.h>
#include <cs50.h>
#include <math.h>

int
main (void)
{
    float perMsF, perFsM, perFsF, perMsM, MsF, FsM, FsF, MsM, sum, i;
    
    //ask the number of male spotting female
    printf("M spotting F: ");
    MsF = GetFloat ();
    
    //ask again if the value given is less than zero
    while (MsF<0)
    {
        printf("M spotting F: ");
        MsF = GetFloat ();
    }
    
    //ask the number of female spotting male
    printf("F spotting M: ");
    FsM = GetFloat ();
    
    //ask again if the value given is less than zero
    while (FsM<0)
    {
        printf("F spotting M: ");
        FsM = GetFloat ();
    }
    
    //ask the number of female spotting female
    printf("F spotting F: ");
    FsF = GetFloat ();
    
    //ask again if the value given is less than zero
    while (FsF<0)
    {
        printf("F spotting F: ");
        FsF = GetFloat ();
    }
    
    //ask the number of male spotting female
    printf("M spotting M: ");
    MsM = GetFloat ();
    
    //ask again if the value given is less than zero
    while (MsM<0)
    {
        printf("M spotting M: ");
        MsM = GetFloat ();
    }
    
    //sum of the inputs
    sum = MsF + FsM + FsF + MsM;
    
    //calculate %
    perMsF = (MsF / sum);
    perFsM = (FsM / sum);
    perFsF = (FsF / sum);
    perMsM = (MsM / sum);
    
    //print "#" based on %
    printf("\n\n");
    printf("M spotting F\n");
    for (i = 0; i < round (perMsF * 80); i++)
    {
        printf("#");
    }
        printf("  %0.2f%%", perMsF * 100);
        printf("\n");
    
    printf("F spotting M\n");
    for (i = 0; i < round (perFsM * 80); i++)
    {
        printf("#");
    }
        printf("  %0.2f%%", perFsM * 100);
        printf("\n");
    
    printf("F spotting F\n");
    for (i = 0; i < round (perFsF * 80); i++)
    {
        printf("#");
    }
        printf("  %0.2f%%", perFsF * 100);
        printf("\n");
    
    printf("M spotting M\n");
    for (i = 0; i < round (perMsM * 80); i++)
    {
        printf("#");
    }
        printf("  %0.2f%%", perMsM * 100);
        printf("\n\n");
}
