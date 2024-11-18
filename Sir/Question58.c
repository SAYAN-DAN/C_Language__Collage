
#include <stdio.h>
struct address
{
    char city[20];
    int pin;
    char phone[14];
};

struct employee
{
    char name[20];
    struct address add;
};

void main()
{
    struct employee emp;
    printf("Enter employy information\n:");
    scanf("%s %s %d", emp.name, emp.add.city, &emp.add.pin);
    printf("printing employ information\n:");
    printf("%s %s %d", emp.name, emp.add.city, emp.add.pin);
}