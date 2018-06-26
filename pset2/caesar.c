#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

/*
 * Conversion Algorithms, from ASCII to Alphabetical index.
 */

int convert_upper(char letter, int key)
{
    return (letter  + key  - 65) % 26;
}

int convert_lower(char letter, int key)
{
    return (letter + key - 97) % 26;
}

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        // Casts the argv's second argument from string to integer
        int key = atoi(argv[1]);

        // Prompts user for a text to be encrypted
        string plain_text = get_string("plaintext: ");

        // prints ciphertext
        printf("ciphertext: ");

        //loops through entire plain_text string, character by character
        for (int i = 0; i < strlen(plain_text); i++)
        {
            // checks if current element is alphabetical
            if (isalpha(plain_text[i]))
            {
                // if it's uppercase apply convert_upper function
                if (isupper(plain_text[i]))
                {
                    char cipher = convert_upper(plain_text[i], key) + 65;
                    printf("%c", cipher);
                }
                // otherwise apply conver_lower
                else
                {
                    char cipher = convert_lower(plain_text[i], key) + 97;
                    printf("%c", cipher);
                }
            }
            // if element is not alphabetical a.k.a special character, do not change it.
            else
            {
                printf("%c", plain_text[i]);
            }
        }
        printf("\n");

    }
    // if key is not provided, terminate execution.
    else
    {
        return 1;
    }

}
