//4. Write a program to search a string in the list of strings.
#include"stdio.h"
#include"string.h"
int main()
{
    char a[5][20],temp[20];
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("Enter string ");
        gets(a[i]);
    }
    printf("Enter string for search ");
    gets(temp);
    for(i=0;i<5;i++)
    {
       if(strcmp ( a[i] , temp ) == 0)
       {
        printf("String found ");
        break;
       } 
    }
    if(strcmp (a[i], temp ) !=0 )
    printf("Not string found");
    return 0;
}