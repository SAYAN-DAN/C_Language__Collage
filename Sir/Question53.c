

#include <stdio.h>

// Define a structure named Student
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter Student ID: ");
    scanf("%d", &s.id);

    printf("Enter Student Name: ");
    scanf("%s", s.name); // Use %s for strings, no & needed for arrays

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Display student details
    printf("\nStudent Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
