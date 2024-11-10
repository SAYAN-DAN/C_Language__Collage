#include <stdio.h>
int main()
{
    char str1[100] = {"Hello"};
    char str2[] = {" World!"};
    strcat(str1, str2);
    printf("Concatinate string is: %s", str1);
    return 0;
}