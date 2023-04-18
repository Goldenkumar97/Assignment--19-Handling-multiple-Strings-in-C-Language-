//7. From the list of IP addresses, check whether all ip addresses are valid.
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main()
{
    char str[20] = "2.154.4.6";
    char st[20];
    strcpy(st, str);
    char *a = strtok(str, ".");
    int i = 0, x;
    while (a != NULL)
    {
        x = atoi(a);
        if ((x >= 0) && (x <= 255))
        {
            i++;
        }
        a = strtok(NULL, ".");
    }
    if (i == 4)
    {
        printf("%s = ", st);
        printf("this ip address is valid");
    }
    else
    {
        printf("Not valid");
    }
}