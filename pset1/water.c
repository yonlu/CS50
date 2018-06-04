#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int length;
    int WATER_BOTTLES = 12; //12 being the 192 ounces that the shower spits per minute
    int totalBottles;
    
    //asks user to input minutes
    printf("Enter your average showering time in minutes: ");
    length = get_int();
    //calculates the total bottles consumed
    totalBottles = length * WATER_BOTTLES;
    //prints results
    printf("Minutes: %i\nBottles: %i\n", length, totalBottles);
}