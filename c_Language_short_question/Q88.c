#include<stdio.h>
int main() {
    int v= 3, *pv = &v;
    printf("%d\n %d\n %d\n", v,*pv, pv);
    return 0;
}