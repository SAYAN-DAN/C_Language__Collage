#include <stdio.h>
struct student
{
    int id;
    char name[100];
    char address[100];
    int roll;
};
int main()
{
    struct student s;
    printf("Enter student id:");
    scanf("%d", &s.id);
    printf("Enter student name:");
    scanf("%s", s.name);
    printf("Enter student Address:");
    scanf("%s", s.address);
    printf("Enter student roll:");
    scanf("%d", &s.roll);

    printf("%d\n%s\n%s\n%d", s.id, s.name, s.address, s.roll);
    return 0;
}