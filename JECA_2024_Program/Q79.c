
#include<stdio.h>
// 1:- It gives us infinite loop.................
int main(){
    while (1)
    {
        printf("In while loop");
        printf("After loop");
    }
    return 0;    
}



// 2:- It gives us compile time error................
// int main(){
//     while ()
//     {
//         printf("In while loop");
//         printf("After loop");
//     }
//     return 0;    
// }