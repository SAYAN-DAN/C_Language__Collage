#include <stdio.h>

int stringCompare(const char *str1, const char *str2);

int main()
{
    char str1[] = "Cat";
    char str2[] = "Cat";

    if (stringCompare(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}

int stringCompare(const char *str1, const char *str2)
{
    while (*str1 && *str2)
    {
        if (*str1 != *str2)
        {
            return 1; // Strings are not equal
        }
        str1++;
        str2++;
    }
    return *str1 != *str2; // Check if both strings end at the same time
}
