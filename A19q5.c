//5. Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.
#include"stdio.h"
#include"string.h"
int main()
{
 int i, a = 0;
    char str[3][20];
    printf("enter 3 email address\n");
    for (i = 0; i < 3; i++)
    {
        gets(str[i]);
    }
    printf("Valid email addresses -->\n");
    for (i = 0; i < 3; i++)
    {
        if (strchr(str[i], '@') != 0)
        {
            printf("%s\n", str[i]);
        }
    }
    return 0;
}