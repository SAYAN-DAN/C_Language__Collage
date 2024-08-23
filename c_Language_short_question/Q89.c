#include<stdio.h>
int main() {
    int v= 3, *pv = &v;
    *pv = 0;
    printf("%d\n%d\n",*pv,v);
    return 0;
}