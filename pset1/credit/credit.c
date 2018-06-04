#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Receives card number as input
    printf("Please enter your card number: ");
    long card_number = get_long_long();

    // Creates an array to store the card's digits
    int card_digits[15];

    // Loop to store the digits into the array (in reverse order);
    printf("Here is the reversed array: ");
    for (int i = 0; i < 15; i++)
    {
        card_digits[i] = card_number % 10;
        card_number /= 10;
        printf("%i-", card_digits[i]);
    }
    printf("\n");

    // Loop through the reversed array, iterating every other digit
    // starting from the second one (originally the second to last one)
    int doubledArray[7];
    int j = 0;
    for (int i = 1; i < 15; i += 2)
    {
        card_digits[i] *= 2;
        doubledArray[j] = card_digits[i];
        j++;
        printf("%i-", card_digits[i]);
    }
    printf("\n");

    printf("Here is the final array: ");
    for (int i = 0; i < 15; i++)
    {
        printf("%i-", card_digits[i]);
    }
    printf("\n");

    // Loops through the doubledArray, making sure to separate
    // all double digit numbers.
    printf("Here is the doubled array: ");
    int addedDigits = 0;
    for (int i = 0; i < 7; i++)
    {
        printf("%i-", doubledArray[i]);
        // Split the number into digits, if it's higher than 10
        // Ex: 11 will become 1 + 1
        if (doubledArray[i] >= 10)
        {
            printf("\n");
            int first_digit = doubledArray[i] / 10;
            int second_digit = doubledArray[i] % 10;
            printf("First Digit: %i\n", first_digit);
            printf("Double Digit: %i\n", second_digit);
            doubledArray[i] = 0;
            addedDigits += first_digit + second_digit;
        }
        addedDigits += doubledArray[i];
    }

    // Loops through the original array again, now looking for the digits
    // that weren't multiplied by 2.
    printf("Unused digits: ");
    int unusedDigits = 0;
    for (int i = 0; i < 15; i+= 2)
    {
        printf("%i-", card_digits[i]);
        unusedDigits += card_digits[i];
    }
    printf("\n");
    printf("Unused Digits, Added: %i\n", unusedDigits);
    printf("Added Digits: %i\n", addedDigits);
    int result = unusedDigits + addedDigits;
    printf("%i\n", result);
}