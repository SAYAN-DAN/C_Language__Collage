#include <stdio.h>
void foo();
int main()
{
   void foo(int);
   foo(1);
   return 0;
}
void foo(int i)
{
   printf("2 ");
}


//--------------------------------------------

#include <stdio.h>

// Global declaration of foo()
void foo(int);

int main()
{
    foo(1);  // Call foo() with argument 1
    return 0;
}

// Function definition of foo
void foo(int i)
{
    printf("2 ");
}
