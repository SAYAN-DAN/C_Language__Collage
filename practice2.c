    #include <stdio.h>
    int main()
    {
        register int i = 10;
        int *p = &i;
        *p = 11;
        printf("%d %d\n", i, *p);
    }