    #include <stdio.h>
    void main()
    {
        int k = 0;
        double b = k++ + ++k + k--;
        printf("%d", b);
    }