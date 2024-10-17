#include <stdio.h>

int if_else_case()
{
    int a;
    scanf("%d", &a);
    if (a <= 9 && a >= 1)
    {
        if (a == 1)
        {
            printf("one");
        }
        else if (a == 1)
        {
            printf("one");
        }
        else if (a == 2)
        {
            printf("two");
        }
        else if (a == 3)
        {
            printf("three");
        }
        else if (a == 4)
        {
            printf("four");
        }
        else if (a == 5)
        {
            printf("five");
        }
        else if (a == 6)
        {
            printf("six");
        }
        else if (a == 7)
        {
            printf("seven");
        }
        else if (a == 8)
        {
            printf("eight");
        }
        else if (a == 9)
        {
            printf("nine");
        }
    }
    else
    {
        printf("Greater than 9");
    }
    return 0;
}

int switch_case()
{
    // Write Your Code Here
    int number;
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;
    default:
        printf("Greater than 9");
    }
    return 0;
}

int another_approach()
{

    int a;
    const char *cases[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &a);

    if (a >= 1 && a <= 9)
    {
        printf("%s", cases[a]);
    }
    else
    {
        printf("Greater than 9");
    }
    return 0;
}
int main()
{
    // another_approach();
    // if_else_case();
    // switch_case();
   int *ptr2;
    int *ptr1=ptr2+2;
    printf("%d", ptr1-ptr2);
}