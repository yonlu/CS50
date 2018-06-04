#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    
    //ask for the pyramid height
    do 
    {
        printf("Enter the half pyramid's height (0-23): ");
        height = get_int();        
    } while (height > 23 || height < 0); //checks if the number is higher than 23 or lesser than 0
    
        //asci code for space
        char space = 32;
        
        //loops through rows
        for (int i = 0; i < height; i++)
        {
            //prints the spaces
            for (int spaces = height - i; spaces > 1; spaces--)
            {
                printf("%c", space);
            }
            
            //prints the hashes
            for (int j = 0; j <= i + 1; j++)
            {
                printf("#");
            }
            
            //creates a new line after each row
            printf("\n");
        }
}