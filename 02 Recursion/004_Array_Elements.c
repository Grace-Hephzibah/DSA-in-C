/* Write a program in C to print the array elements using recursion */

#include<stdio.h>

void disp_arr(int n, int count, int arr[])
{
  if (count <= n)
  {
    printf("Element No %d --> %d \n", count+1, arr[count]);
    disp_arr(n, count+1, arr);
  }
}

int main()
{
  int a[] = {1,2,3,4,5,6,7,8,9,10};
  int len = 10;

  disp_arr(len-1, 0, a);

  return 0;
}
