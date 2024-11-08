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

int pointer_Substraction()
{
    int *ptr2;
    int *ptr1 = ptr2 + 2;
    printf("%d", ptr1 - ptr2);
}

int calculateStringSze()
{
    // Array of strings (each string is a char pointer)
    char *arr[] = {"Hello", "World", "C", "Programming"};
    printf("%d\n", sizeof(arr));
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", size);

    printf("Elements of the array of pointers:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", arr[i]);
    }
}

int calculateArraySize()
{
    int arr[] = {10, 20, 30, 40, 50};
    printf("%d\n", sizeof(arr));
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", size);
}

int do_while_loop()
{
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 9);
}

int print_string_using_while_loop()
{
    char arr[] = {"Hello world"};
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c\n", arr[i]);
        i++;
    }
}

int string_initialization()
{
    char str[] = {"College Wallah"};
    char *ptr = str;
    ptr = "Physics Wallah";
    printf("%s\n", str);
    printf("%s\n", ptr);
    printf("%c\n", *ptr);
}

int string_modify()
{
    char s1[] = {"Collage Wallah"};
    char s2[] = {"Collage Wallah"};
    s2[0] = 'M';
    printf("%s\n", s1);
    printf("%s", s2);
}

int octal_calculate()
{
    int x = 077;
    // int y = 079;
    printf("%d", x);
    // printf("%d", y);
    return 0;
}

int string_length_calculate()
{
    int count = 0;
    char ch[100];
    printf("Enter the string: ");
    gets(ch);
    // Using strlen function---------
    //     int length = strlen(ch);
    //    printf("The String length is: %d", length);

    // Without strlen function------------

    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    printf("The String length is: %d", count);
}



int main()
{
    // another_approach();
    // if_else_case();
    // switch_case();
    // pointer_Substraction();
    // calculateStringSze();
    // calculateArraySize();
    // do_while_loop();
    // print_string_using_while_loop();
    // string_initialization();
    // string_modify();
    // octal_calculate();
    // string_length_calculate();
}