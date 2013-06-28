#include <cs50.h>
#include <stdio.h>

int
main (void)
{
    int numofquartercoins, remainderfordime, numofdimecoins, remainderfornickel, numofnickelcoins, remainderforpenny, numofpennycoins;
    float change, changeincents;
    
    //ask the user to input the amount of change
    printf("O hai! How much change is owed? ");
    change = GetFloat();
    
    //repeatedly ask the user while the amount of change is <0.01
    while (change < 0)
    {
        printf("Er! How much change is owed? ");
        change = GetFloat();
    }
    
    //convert the amount of change to centavo
    changeincents = change * 100;
    
    //compute the number of quarter coins in change
    numofquartercoins = (int)changeincents / 25;
    
    //compute the number of dime coins in change
    remainderfordime = (int)changeincents % 25;
    numofdimecoins = remainderfordime / 10;
    
    //compute the number of nickel coins in change
    remainderfornickel = remainderfordime % 10;
    numofnickelcoins = remainderfornickel / 5;
    
    //compute the number of penny coins in change
    remainderforpenny = remainderfornickel % 5;
    numofpennycoins = remainderforpenny;
   
    //print the lowest number of coins for the amount of change
    printf("%d\n", numofquartercoins + numofdimecoins + numofnickelcoins + numofpennycoins);
         
}
