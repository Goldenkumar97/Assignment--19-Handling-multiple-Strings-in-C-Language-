/*8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
 word1 = “the”, word2 = “fox”, OUTPUT : 1 )
*/
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main()
{
    int i = 5, a = -1, b = -1;
    char str[5][20] = {"the", "quick", "brown", "fox", "quick"};
    char w1[] = "the";
    char w2[] = "quick";
    for (i = 0; i < 5; i++)
    {
        if (strcmp(str[i], w1) == 0)
            a = i;
        if (strcmp(str[i], w2) == 0)
            b = i;
    }
    if (a != -1 && b != -1)
    {
        printf("minimum distance is = %d", (abs(b - a) - 1));
    }
    
    return 0;
}