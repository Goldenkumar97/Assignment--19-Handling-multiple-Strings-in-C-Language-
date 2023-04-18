/*9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
int main()
{
    char str[5][20] = {"praveen", "pritam", "dipu", "sunil", "Golden"};
    char s[] = "Golden";
    int i;
    for (i = 0; i < 5; i++)
    {

        srand(time(0));
        if (strcmp(str[i], s) == 0)
        {
            int x = rand() % 10;
            int y = 1;
            for (i = x; i > 0; i--)
            {
                y = y * i;
                printf("%d\n", y);
            }
            printf("factorial of %d is %d ", x, y);
            break;
        }
    }
    if (strcmp(str[i], s) != 0)
    {
        printf("error");
    }
    return 0;
}