
// WAP to input a character and determine wheather it is a vowel or consonant
#include <stdio.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Using ternary operator to determine if the character is a vowel or a consonant
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ? 
     printf("%c is a vowel.\n", ch) : printf("%c is a consonant.\n", ch);

    return 0;
}
