//6. Write a program to print the strings which are palindrome in the list of strings.
#include "stdio.h"
#include "string.h"
int main()
{
    char str[5][20];
    char s[5][20];
    printf("enter 5 strings\n");
    int i;
    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }
    for (i = 0; i < 5; i++)
    {
        strcpy(s[i], str[i]);
    }
    printf("Palindrome strings are\n");
    for (i = 0; i < 5; i++)
    {
        if (strcmp(str[i], strrev(s[i])) == 0)
        {
            printf("%s\n", str[i]);
        }
    }
    return 0;
}