

#include <stdio.h>

// Define a union named StudentInfo
union StudentInfo {
    int id;
    char name[50];
    float marks;
};

int main() {
    union StudentInfo s;

    // Store and display Student ID
    s.id = 101;
    printf("Student ID: %d\n", s.id);

    // Store and display Student Name
    // This will overwrite the previous value (ID)
    snprintf(s.name, sizeof(s.name), "Alice");  // Safe way to handle strings
    printf("Student Name: %s\n", s.name);

    // Store and display Student Marks
    // This will overwrite the previous value (Name)
    s.marks = 89.5;
    printf("Student Marks: %.2f\n", s.marks);

    // Note that each time we store a new value, the previous data is lost.

    return 0;
}
