#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the string 1:");
    gets(str1);
    printf("Enter the string 2:");
    gets(str2);
    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("The strings are equal");
    }
    else if (result > 0)
    {
        printf("The string-1 are greaterthan string-2");
    }
    else
    {
        printf("The string-2 are greaterthan string-1");
    }
    return 0;
}