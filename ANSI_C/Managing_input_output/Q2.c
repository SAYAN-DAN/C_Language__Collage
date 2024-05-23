// program to test the character type.....

#include<stdio.h>
#include<ctype.h>
int main() {
    char character;
    printf("press any key: ");
    character = getchar();
    if ( isalpha(character) > 0){
        printf("This is a letter");
    }
    else if ( isdigit(character) > 0){
        printf("This is a digit");        
    }
    else{
        printf("This is nota a alphanumeic.");        
    }
    return 0;    
}
