#include<stdio.h>
int main() {
    int abc();
    abc();
    (*abc) ();
}
int abc() {
    printf("come");
}