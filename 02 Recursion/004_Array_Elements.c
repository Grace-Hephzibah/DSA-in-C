/* Write a program in C to print the array elements using recursion */

#include<stdio.h>

void disp_arr(int n, int arr[])
{
  if (n >= 0)
  {
    disp_arr(n-1 , arr);
    printf("Element No %d --> %d \n", n+1, arr[n]);
  }
}

int main()
{
  int a[] = {12,32,38,49,35,66,47,38,19,10};
  int len = 10;

  disp_arr(len-1, a);

  return 0;
}
