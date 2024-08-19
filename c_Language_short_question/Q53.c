#include<stdio.h>
int main() {
    typedef char x[10];
    x myArray[5];
    sizeof(myArray);
    printf("Size of myArray is %d",sizeof(myArray));
}
