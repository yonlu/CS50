#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int coins = 0;
    float n;

    // Coins used as change
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;

    // Asks for user's input, until the input value is not negative
    do
    {
        printf("O hai! How much change is owed? ");
        n = get_float();
    }
    while (n <= 0);

    n = n * 100;
    double round(double n);
    printf("Amount recieved: %f \n", n);

    while (n >= quarter)
    {
        coins++;
        n = n - quarter;
        printf("Current amount is: %2.f, Coins used: %i\n", n, coins);
    }

    while (n >= dime)
    {
        coins++;
        n = n - dime;
        printf("Current amount is: %2.f, Coins used: %i\n", n, coins);
    }

    while (n >= nickel)
    {
        coins++;
        n = n - nickel;
        printf("Current amount is: %2.f, Coins used: %i\n", n, coins);
    }

    while (n >= penny)
    {
        coins++;
        n = n - penny;
        printf("Current amount is: %2.f, Coins used: %i\n", n, coins);
    }

    printf("%i Coins\n", coins);
}