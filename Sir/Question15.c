// Write a program to compute the sum of all integers that are divisable by 4 and lie betwwen 0 and 100....

#include<stdio.h>
int main() {
  int i,sum=0;
  for ( i = 1; i <=100; i++){
      if (i% 6 ==0 && i %4 !=0)
      {
         sum = sum+i;
      }
  }
      printf("The sum is:%d",sum);     
      return 0;  
}