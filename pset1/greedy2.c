#include <stdio.h>
#include <cs50.h>
#include <math.h>

void convert(float number)
{
    number = (int)(number+0.5);
}

int main(void)
{
    float n;
    int count = 0;
    
    do {
        printf("Enter a number: ");
        n = get_float();
    } while (n <= 0);
    
    convert(n);
    
    while (n >= 0.25)
    {
        count++;
        n -= 0.25;
    }
    
    while (n >= 0.10)
    {
        count++;
        n -= 0.10;
    }
    
    while (n >= 0.5)
    {
        count++;
        n -= 0.5;
    }
    
    while (n >= 0.1)
    {
        count++;
        n -= 0.1;
    }
    
    printf("%f\n", n);
    printf("%i Coins\n", count);
}
