#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        printf("Enter the pyramid's height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);

    // loops through each row
    for (int i = 0; i < height; i++)
    {
        // prints spaces needed for left pyramid
        for (int j = i; j < height - 1; j++)
        {
            printf(" ");
        }

        // prints left pyramid
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        // gap of two spaces between pyramids
        printf("  ");

        // prints right pyramid
        for (int z = 0; z <= i; z++)
        {
            printf("#");
        }

        // new line for each row of the pyramid
        printf("\n");
    }
}