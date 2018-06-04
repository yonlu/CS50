#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // asks for the user's name
    string name = get_string();
    
    // if the given string is not empty
    if (name != NULL)
    {
        // converts the entire name into lowercase first
        for (int i = 0; i <strlen(name); i++)
        {
            name[i] = tolower(name[i]);
        }
        
        // converts the first letter into uppercase
        name[0] = toupper(name[0]);
        
        // iterares through the entire name, character by character
        for (int i = 0; i < strlen(name); i++)
        {
           // if the previous character is a space, converts the current one to uppercase
            if(name[i-1] == ' ')
            {
                name[i] = toupper(name[i]);
            }
            
            // prints the initials, in a single line
            if(isupper(name[i]))
            {
                printf("%c", name[i]);
            }
        }
        printf("\n");
    }
}