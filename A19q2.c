//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include"stdio.h"
#include"string.h"
int main()
{
  char a[10][20],t[20];
  int i,j;
  printf("Enter 10 city name\n");
  for(i=0;i<10;i++)
  {
    printf("Enter city name :- ");
    gets(a[i]);
  }
  for(i=0;i<10;i++)
  {
    for(j=i+1;j<20;j++)
    {
        if(strcmp (a[i],a[j] ) > 0 )
        {
            strcpy(t,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],t);
        }
    }
  }
  for(i=0;i<10;i++)
  
    printf("%s \n",a[i]);
  
  return 0;
}