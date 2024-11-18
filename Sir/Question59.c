#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int x = 0, y = 0;
    char str[100];
    printf("Enter the string: \n");
    gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            x++;
        }
        if (str[i] >= '0' && str[i] <= '9')
        {
            y++;
        }

        i++;
    }
    printf("Total number of vowel is: %d", x);
    printf("Total number of digit is: %d", y);
}