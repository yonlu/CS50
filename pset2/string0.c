1   #include <cs50.h>
  1 #include <stdio.h>
  2 #include <string.h>
  3
  4 int main(void)
  5 {
  6     string s = get_string("input: ");
  7     printf("output: ");
  8     for (int i = 0; i < strlen(s); i++)
  9     {
 10         printf("%c\n", s[i]);
 11     }
 12 }
