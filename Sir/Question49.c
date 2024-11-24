#include<stdio.h>
char stringconcat(char *str1 ,char *str2);
int main() {
    char str1[100] = {"Hello"};
    char str2[] = {"World"};

    stringconcat(str1,str2);
    printf("%s", str1); 
}

char stringconcat(char *str1 , char *str2){
    int i=0,j=0;
    while(str1[i] != '\0'){
        i++;
    }

    while(str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}