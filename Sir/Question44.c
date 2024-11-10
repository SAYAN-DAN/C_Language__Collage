#include <stdio.h>
int main()
{
    int count = 0;
    char ch[100];
    printf("Enter the string: ");
    gets(ch);
    int length = strlen(ch);
    printf("The String length is: %d", length);
    return 0;
}