//3. Write a program to read and display a 2D array of strings in C language.
#include"stdio.h"
#include"string.h"
int main()
{
    char str[5][20] = {"golden", "goldy", "hanumaan", "kajal", "ranjit"};
    int i;
    printf("strings are -->\n");
    for (i = 0; i < 5; i++)
        printf("string [%d] = %s\n",i+1, str[i]);

    return 0;
}