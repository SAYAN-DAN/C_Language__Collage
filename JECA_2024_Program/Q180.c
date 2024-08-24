#include<stdio.h>
int main(){
    char srt1[] = "mahendra singh",str2[] = "dhoni captain";
    strncat(str1,str2,5);
    printf("\n %s", str1);
}