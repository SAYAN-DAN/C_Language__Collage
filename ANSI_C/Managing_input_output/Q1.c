
// use the getchar to read a charecter from keyword....
#include <stdio.h>
int main() {
    char answer;
    printf("Do you want to know my name?\n");
    printf("Press y for YES and press n for NO\n");
    scanf("%c" , &answer);
    // answer = getchar();
    if ( answer == 'Y' || answer == 'y'){
        printf("My name is Sayan Dan\n");        
    }
    else{
        printf("Ok I do not told you my name\n");        
    }
    return 0;

}