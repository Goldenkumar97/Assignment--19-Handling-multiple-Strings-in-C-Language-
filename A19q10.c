//10. Create an authentication system. It should be menu driven.
#include"stdio.h"
#include"string.h"
int main()
{
    char str[4][2][20] = {{"Golden", "090"}, {"ranjeet", "123"}, {"chandan", "45678"}};
    char username[] = "Golden";
    char password[] = "098";
    int a = 0;
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(username, str[i][0]) == 0 && strcmp(password, str[i][1]) == 0)
        {
            printf("Username and Password are Matching");
            a = 1;
        }
    }
    if (a == 0)
        printf("Username and Password are Not Matching");

    return 0;
    
}