// Write a program to find the maximum element and corrosponding position from array..

#include <stdio.h>
int main()
{
  int arr[10], i, maxe, maxp;
  for (i = 0; i < 10; i++)
  {
    printf("Enter #%2d element: ", i + 1);
    scanf("%d", &arr[i]);
  }
  maxe = arr[0];
  maxp = 0;
  for (i = 0; i < 10; i++)
  {
    if (arr[i] > maxe)
    {
      maxe = arr[i];
      maxp = i;
    }
  }
  printf("Maximum element = %d is at position %d", maxe, maxp + 1);
  return 0;
}