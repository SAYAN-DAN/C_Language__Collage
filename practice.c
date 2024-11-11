#include <stdio.h>
#include <string.h>

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

int compare_string_using_strcmp()
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

int concatinate_string_using_strcat()
{
    char str1[100] = {"Hello"};
    char str2[] = {" World!"};
    strcat(str1, str2);
    printf("Concatinate string is: %s", str1);
}

int pointer_Ques_1()
{
    char *p;
    printf("%d %d", sizeof(*p), sizeof(p));
}

int pointer_Question_2()
{
    printf("%d %d", sizeof(int *), sizeof(int **));
}

int pointerr_Question_3()
{
    char str[] = "online\0exam";
    printf("%s", str);
}

int pointer_Question_4()
{
    char str1[] = "mahendra singh", str2[] = "dhoni caption";
    strncat(str1, str2, 5);
    printf("\n %s", str1);
}

int if_terminated_by_semicolon()
{
    int x = 10;

    if (x == 10)
        ; // Semicolon ends the if statement with a null statement as its body
    {
        printf("x is: 10\n"); // This will execute unconditionally
    }

    return 0;
}

int non_decleared_element_in_array()
{
    int x[5] = {10, 20, 30};
    printf("%d", x[3]);
    return 0;
}

int predict_output_1()
{
#define MAN(x, y) ((x) > (y)) ? (x) : (y);

    int i = 10, j = 5, k = 0;
    k = MAN(++i, j++);
    printf("%d, %d, %d\n", i, j, k);
    return 0;
}

int predict_output_2()
{
#define SQR(x) (x * x)

    int a, b = 3;
    a = SQR(b + 2);
    printf("%d\n", a);
    return 0;
}

int predict_output_3()
{
#define CUBE(x) (x * x * x)
    int a, b = 3;
    a = CUBE(b++);
    printf("%d, %d\n", a, b);
    return 0;
}

int predict_output_4()
{
    int x;
    x = printf("sbte");
    printf("=%d", x);
}

int predict_output_5()
{
    float a = 0.1;
    if (a == 0.1)
        printf("equal\n");
    else
        printf("not equal\n");
}

int predict_output_6()
{
    double a = 14728749.22;
    int b = a;
    printf("%d\n", b);
    printf("%lf\n", b);
}

int predict_output_7()
{
    printf("%d", printf("timm"));
}

int predict_output_8()
{
    char x, y, z;
    printf("%d", scanf("%c%c%c", &x, &y, &z));
}

int predict_output_9()
{
    int a = 1, b = 2, c = 3;
    // here we get the value of d is 11 in first case and get 8 in the sccond case why?? because the value of the last expression is evaluated the ans of d because here we use , operator..
    //    int d = (a=c,b+=a,c = a+b+c);
    int d = (a = c, c = a + b + c, b += a);
    printf("%d\n", d);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}

int predict_output_10()
{
    int a = 20;
    double b = 15.6;
    int c;
    c = a + b;
    printf("%d", c);
}

int predict_the_output_11()
{
    int true = 4;
    int false = 4;
    int friend = 4;
    int export = 4;
    int array = 4;
    // int volatile = 4;
    printf("%d\n", true);
    printf("%d\n", friend);
    printf("%d\n", export);
    printf("%d\n", false);
    printf("%d\n", array);
    return 0;
}

int predict_the_output_12()
{
    int var = 010;   // 1*8^1 + 0 *8^0 = 8
    int var1 = 011;    // 1*8^1 + 1 *8^0 = 8+1 = 9
    int var2 = 0111;    // 1*8^2 + 1 *8^1 + 1 * 8^0 = 64+8+1 = 73 
    printf("%d\n", var);
    printf("%d\n", var1);
    printf("%d\n", var2);
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
    // compare_string_using_strcmp();
    // concatinate_string_using_strcat();
    // pointer_Ques_1();
    // pointer_Question_2();
    // pointerr_Question_3();
    // pointer_Question_4();
    // if_terminated_by_semicolon();
    // non_decleared_element_in_array();
    // predict_output_1();
    // predict_output_2();
    // predict_output_3();
    // predict_output_4();
    // predict_output_5();
    // predict_output_6();
    // predict_output_7();
    // predict_output_8();
    // predict_output_9();
    // predict_output_10();
    // predict_the_output_11();
    predict_the_output_12();
    return 0;
}