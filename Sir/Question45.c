#include <stdio.h>
int main()
{
    int count = 0;
    char ch[100];
    printf("Enter the string: ");
    gets(ch);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    printf("The String length is: %d", count);
    return 0;
}